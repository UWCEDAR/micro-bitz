# micro-bitz
Repo for micro:bit research
Created by: Rafer Cooley on Oct.6

Note: installed uflash and microfs through pip for use with MicroPython

Note: installed yotta and srecord for C/C++ development

## Layout
* [lancast-samples](./lancast-samples) - C/C++ examples from Lancaster U
* [Radiobit](./radiobit) - Virtuallabs library from DEFCON 25
* [radio-star](./radio-star) - my attempts to be a radio star

## Flow:
(in new project directory)
1. yt init (mark as executable)
2. yt target bbc-microbit-classic-gcc-nosd
3. yt up
4. yt build
5. *code*
6. uflash -r precompiled/radiobit.hex yourprogramhere.py
7. be a star

[Link to the links page](./learn.md)
