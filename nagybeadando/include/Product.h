#ifndef PRODUCT_H
#define PRODUCT_H

#include <Train.h>
#include <string>
#include <map>

class Product
{
    public:
        Product(std::string name,std::string source, std::string destination, int quantity);
        bool canReachDestination(std::vector<Train>& trains);

        std::string _name;
        std::string _source;
        std::string _destination;

        std::map<std::string,int> _tracking; //hol és mennyi van a termékbõl az egyes állomásokon lepakolt állapotban

    protected:

    private:
};

#endif // PRODUCT_H
