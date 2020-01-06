#include "Wagon.h"

using namespace std;

Wagon::Wagon(std::string name, std::string place, int size) : Vehicle(name,place), _size(size)
{
    _load=0;
    _product="";
}

void Wagon::pakol(std::string product, std::map<std::string,int>& tracking)
{
    _product=product;
    if(tracking[_place]>_size)
    {
        tracking[_place]-=_size;
        _load=_size;
    }
    else
    {
        _load=tracking[_place];
        tracking[_place]=0;
    }
}

void Wagon::lepakol()
{
    _product="";
    _load=0;
}
