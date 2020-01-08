#include "Wagon.h"

using namespace std;

Wagon::Wagon(std::string name, std::string place, int size) : Vehicle(name,place), _size(size)
{
    _load=0;
    _product="";
}

void Wagon::pakol(std::string product, std::map<std::string,int>& products)
{
    if(_load==0)
    {
        _product=product;
        if(products[product]<_size)
        {
            _load=products[product];
            //products.erase(product);
        }
        else
        {
            _load=products[product]-_size;
            products[product]-=_load;
        }
    }
    else if(_product==product)
    {
        if(products[product]<=_size-_load)
        {
            _load+=products[product];
            //products.erase(product);
        }
        else
        {
            products[product]-=_size-_load;
            _load=_size;
        }
    }
}

void Wagon::lepakol(std::map<std::string,int>& products,int mennyit)
{
    if(products.find(_product)==products.end())
        products[_product]=_load;
    else
        products[_product]+=_load;
    _product="";
    _load-=mennyit;
}
