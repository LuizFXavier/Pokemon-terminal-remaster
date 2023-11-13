#pragma once
#include "GameObject.hpp"

class Rectangle:public GameObject
{
private:
    
public:
    Rectangle(int x, int y, int width, int height, Sprite sprite);
    
    void render();
};