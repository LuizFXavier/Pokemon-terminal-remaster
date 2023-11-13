#include "Rectangle.hpp"

Rectangle::Rectangle(int x, int y, int width, int height, Sprite sprite) : GameObject(x, y, width, height, sprite)
{
}
void Rectangle::render(){

    for (int i = 0; i < this->height; i++){
        gotoXY(this->x, this->y + i);
        
        for (int j = 0; j < this->width; j++){
            int cor = this->sprite.bitMap[i][j];
            printf("\033[48;5;%dm ",this->sprite.cores[cor]);
        }
    }
}
