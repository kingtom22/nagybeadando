#ifndef WAGON_H
#define WAGON_H

#include "Vehicle.h"
#include <map>

class Wagon : public Vehicle
{
    public:
        Wagon(std::string name, std::string place, int size);
        void pakol(std::string product, std::map<std::string,int>& tracking);//módosítja a mennyiséget is
        void lepakol();

        int _size;
        int _load;
        std::string _product;


    protected:

    private:
};

#endif // WAGON_H
