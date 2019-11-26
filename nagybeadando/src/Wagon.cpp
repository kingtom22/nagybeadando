#include "Wagon.h"

using namespace std;

Wagon::Wagon(std::string name, std::string place, int size) : Vehicle(name,place), _size(size)
{
    _load=0;
    _product="";
}

void Wagon::pakol(std::string product, int& quantity)
{
    _product=product;
    if(quantity>_size)
    {
        quantity-=_size;
        _load=_size;
    }
    else
    {
        _load=quantity;
        quantity=0;
    }
}

void Wagon::lepakol()
{
    _product="";
    _load=0;
}
