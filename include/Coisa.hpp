#pragma once

#include "conio3.hpp"

class Coisa
{
private:
    int x, y, width, height, cor;
public:
    Coisa(int x, int y, int width, int height, int cor);
    
    void render();
};
