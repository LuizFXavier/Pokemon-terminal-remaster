#include "conio3.hpp"

void gotoXY(int x, int y){
    printf("\033[%d;%dH", y, x);
}