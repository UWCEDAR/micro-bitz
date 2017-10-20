Note: installed uflash and microfs through pip for use with MicroPython

Note: installed yotta and srecord for C/C++ development
# Offline Development Tools & Guides
* [Toolchains](https://lancaster-university.github.io/microbit-docs/offline-toolchains/)
* [i-programmer](http://www.i-programmer.info/programming/hardware/9654-offline-cc-development-with-the-microbit-.html)
* [instructable](http://www.instructables.com/id/BBC-Microbit-C-Off-line-Setup/)
* [forward](http://www.forward.com.au/pfod/microbit/compileSetup.html)
* [Mac Help](https://os.mbed.com/forum/mbed/topic/1091/?page=1#comment-22163)
* [Yotta](http://docs.yottabuild.org/#installing)
* [hwhacks](http://hwhacks.com/2016/05/21/getting-started-with-offline-c-on-the-bbc-microbit/)

## C/C++ Flow:
(in new project directory)
1. yt init (mark as executable)
2. yt target bbc-microbit-classic-gcc
3. yotta install lancaster-university/microbit
4. change dependency in module.json to
```
"dependencies": {
    "microbit": "lancaster-university/microbit"
  },
```
5. yt up
6. put code inside /source
7. \*code\*
4. yt build
6. drag <project-name>.hex onto microbit
7. be a star

## Python Flow:
(in new project directory)
1. yt init (mark as executable)
2. yt target bbc-microbit-classic-gcc-nosd
3. yt up
4. yt build
5. *code*
6. uflash -r radiobit.hex yourprogramhere.py
7. be a star
