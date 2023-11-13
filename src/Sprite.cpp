#include "Sprite.hpp"

Sprite::Sprite(std::string path, std::string titulo)
{
    this->titulo = titulo;
    this->path = path;

    std::ifstream file(path);
    nlohmann::json j;

    file >> j;

    int i = 0;

    while (true)
    {
        try
        {
            this->cores.push_back(j[titulo]["cores"][i]);
            // std::cout<< this->cores.size()<<"\n";
            i++;
        }
        catch(const nlohmann::json_abi_v3_11_2::detail::type_error e)
        {
            break;
        }
        
        
    }
    
    i = 0;
    int k = 0;
    std::vector<int> temp;

    while (true)
    {
        try
        {
            temp.push_back((int)(j[titulo]["sprite"][i][k]));
            // std::cout << temp[k];
            k++;
        }
        catch(const std::exception& e)
        {
            if(k == 0){
                break;
            }
            // std::cout<<"\n";
            k = 0;
            this->bitMap.push_back(temp);
            temp.clear();
            i++;
        }
        
    }
    
    // std::cout<<"Tam: "<<bitMap.size()<< " x "<<bitMap[0][3]<<"\n";
    
    // for (int k = 0; k < this->bitMap.size(); k++){
    //     for (int j = 0; j < this->bitMap[0].size(); j++){
    //         std::cout<<this->bitMap[k][j] << " ";
    //     }
    //     std::cout<<std::endl;
    // }
}

Sprite::~Sprite()
{
}