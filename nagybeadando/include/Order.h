#ifndef ORDER_H
#define ORDER_H

#include <Train.h>

class Order
{
    public:
        Order(std::string name,std::string source, std::string destination, int quantity);
        bool canReachDestination(std::vector<Train>& trains);
        bool hasArrived();

        std::string _name;
        std::string _source;
        std::string _destination;
        int _quantity;

        std::map<std::string,int> _tracking; //hol �s mennyi van a term�kb�l az egyes �llom�sokon lepakolt �llapotban

    protected:

    private:
};

#endif // ORDER_H
