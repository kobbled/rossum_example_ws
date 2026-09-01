namespace Positioner
  frame := UTOOL[3]
  frame.group(1).pose -> [0,0,0,0,0,0]
  home := PR[4]
  home.group(1).pose -> [0,0,0,0,0,0]
end

namespace Tool1
  frame := UTOOL[1]
  frame.group(1).pose -> [0,0,0,0,0,0]
end

namespace Lam
  power          := R[60]
  power = 3000
  flowrate       := R[26]
  flowrate = 1
  speed          := R[61]
  speed = 15
  strt           := DO[3]
  strt = off
  enable         := DO[1]
  enable = off
end

def process()
  using Positioner, Tool1, Lam

  TP_GROUPMASK = "1,*,1,*,*"

  use_utool Tool1::frame
  use_uframe Positioner::frame

  #move home
  linear_move.to(Positioner::home).at(100, 'mm/s').term(-1)

  Lam::set_parameters(&Lam::power, &Lam::flowrate, &Lam::speed)
  Lam::enable = on

  l := LR[]
  layers := LR[]
  while l < layers

    #pause after each layer
    if (layers > 1)
      Lam::enable = off
      #move home
      linear_move.to(Positioner::home).at(100, 'mm/s').term(-1)
      pause
      Lam::enable = on
    end
    
    #run through path
    Lam::strt = on

    j := LR[]
    passes := LR[]
    program_name := SR[1]
    while j < passes
      call program_name()
    end
    Lam::strt = off
  end

  Lam::enable = off

  #move home
  linear_move.to(Positioner::home).at(100, 'mm/s').term(-1)
end