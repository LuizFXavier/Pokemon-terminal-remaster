#pragma once

#include "conio3.hpp"
#include "Sprite.hpp"

class GameObject
{
protected:
    int x, y, width, height;
    Sprite sprite;
    
public:
    GameObject(int x, int y, int width, int height, Sprite sprite);
    
    virtual void render() = 0;
};