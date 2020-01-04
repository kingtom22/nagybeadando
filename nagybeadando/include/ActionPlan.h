#ifndef ACTIONPLAN_H
#define ACTIONPLAN_H

#include "Product.h"

class ActionPlan
{
    public:
        ActionPlan(std::vector<Train>& trains, std::vector<Product>& products, std::vector<Wagon>& wagons);
        bool areProductsDelivered();
        void canProductsBeDelivered();
        void CreatePlan();


        std::vector<Train>& _trains;
        std::vector<Product>& _products;
        std::vector<Wagon>& _wagons;
        int _time;
    protected:

    private:
};

#endif // ACTIONPLAN_H
