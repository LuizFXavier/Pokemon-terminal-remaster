#include "GameObject.hpp"

GameObject::GameObject(int x, int y, int width, int height, Sprite sprite)
{
    this->x = x;
    this->y = y;
    this->width = width;
    this->height = height;
    this->sprite = sprite;
}