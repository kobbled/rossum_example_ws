#*****************
#  Home Position 
#*****************

TP_GROUPMASK = "1,*,*,*,*"
TP_COMMENT = "pose home"

home       := P[1]

use_utool 1
use_uframe 0

joint_move.to(home).at(15, '%').term(FINE)

position_data
{
  'positions' : [
    {
      'id' : 1,
      'mask' :  [{
        'group' : 1,
        'uframe' : 0,
        'utool' : 1,
        'components' : {
            'J1' : 127.834,
            'J2' : 24.311,
            'J3' : -29.462,
            'J4' : -110.295,
            'J5' : 121.424,
            'J6' : 54.899
            }
        }]
    }
  ]
}
end


