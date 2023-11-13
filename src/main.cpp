#include <iostream>
#include <fstream>
#include <nlohmann/json.hpp>
#include <string>
#include "Coisa.hpp"
#include "Sprite.hpp"
#include "Rectangle.hpp"

int main() {
    system("clear");
    Sprite sprt("./assets/mapa.json","bola");
    Rectangle casa(1,1,28,16,sprt);

    casa.render();
    std::cout<<"\n";
}