#include "MicroBit.h"
MicroBit uBit;
int main(){
uBit.init();
uBit.display.scroll("hello");
release_fiber();
}
