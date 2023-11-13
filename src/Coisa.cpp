#include "Coisa.hpp"

Coisa::Coisa(int x, int y, int width, int height, int cor)
{
    this->x = x;
    this->y = y;
    this->width = width;
    this->height = height;
    this->cor = cor;

}

void Coisa::render(){

    printf("\033[48;5;%dm",this->cor);

    for (int i = 0; i < this->height; i++){
        gotoXY(this->x, this->y + i);
        
        for (int j = 0; j < this->width; j++){
            std::cout<<" ";
        }
    }
}