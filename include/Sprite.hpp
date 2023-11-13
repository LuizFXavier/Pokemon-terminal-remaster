#pragma once

#include <iostream>
#include <fstream>
#include <string>
#include <nlohmann/json.hpp>

class Sprite
{
private:
    std::string titulo, path;
public:
    std::vector<int> cores;
    std::vector<std::vector<int>> bitMap;

    Sprite(){};
    Sprite(std::string path, std::string titulo);
    ~Sprite();
};
