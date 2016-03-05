# rossum_example_ws


This repository contains an example workspace for use with [rossum][].

To build it, in a Windows `cmd` session::

    cd C:\Temp
    git clone https://github.com/gavanderhoorn/rossum_example_ws.git
    cd C:\Temp\rossum_example_ws
    mkdir build && cd build
  
    rossum ..\src
  
    make

This should invoke `ktrans` with the appropriate arguments to build
all binary targets of all discovered projects in the `build` directory.

For more information on `rossum`, see [rossum][].



[rossum]: https://github.com/gavanderhoorn/rossum
