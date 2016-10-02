# rossum_example_ws


This repository contains an example workspace for use with [rossum][].

To build it, in a Windows `cmd` session::

    cd C:\Temp
    git clone https://github.com/gavanderhoorn/rossum_example_ws.git
    cd C:\Temp\rossum_example_ws
    mkdir build && cd build
  
    rossum ..\src
  
    ninja

This will build all binary targets defined in the two example projects (`lib_a`
and `prog_x`) and place the results in `build`.

For more information on `rossum`, see [rossum][].



[rossum]: https://github.com/gavanderhoorn/rossum
