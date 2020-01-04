#include <iostream>
#include "ActionPlan.h"

using namespace std;

ActionPlan::ActionPlan(std::vector<Train>& trains, std::vector<Product>& products, std::vector<Wagon>& wagons) :
    _trains(trains), _products(products), _wagons(wagons)
{
    //ctor
    _time=0;
}

bool ActionPlan::areProductsDelivered()
{
    for(Product& p:_products)
    {
        if(!p.hasArrived())
            return false;
    }
    return true;
}

void ActionPlan::canProductsBeDelivered()
{
    for(vector<Product>::iterator it=_products.begin();it!=_products.end();it++)
    {
        if(!it->canReachDestination(_trains))
        {
            cout<<"Hiba! "<<it->_name<<" can't reach it's destination."<<endl;
            _products.erase(it);
            it--;
        }
    }
}

void ActionPlan::CreatePlan()
{
    while(!areProductsDelivered())
    {
        /// To Do ///
        // do possible pakolás


        // do possible csatlakoztatás

        // állapotjelentés ha debug mode

        // move trains
        // time++


        return;
    }
}

