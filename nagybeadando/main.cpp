#include <iostream>
#include "ActionPlan.h"

using namespace std;

int main()
{
#ifdef DEBUG
    cout << "Debug mode!" << endl;
#else
    cout << "Release mode!" << endl;
#endif
    vector<Train> trains;
    Train t1("vonat1schedule.txt");
    Train t2("vonat2schedule.txt");
    trains.push_back(t1);
    trains.push_back(t2);

    vector<Order> orders;
    Order eper("eper","A","C",35);
    Order retek("retek","B","D",10);
    Order retek1("retek","C","D",50);
    Order rebarbara("rebarbara","A","D",100);
    orders.push_back(eper);
    orders.push_back(retek);
    orders.push_back(retek1);
    orders.push_back(rebarbara);

    vector<Wagon> wagons;
    Wagon w1("egyes vagon","A",10);
    Wagon w2("kettes vagon","B",15);
    wagons.push_back(w1);
    wagons.push_back(w2);

    ActionPlan myActionPlan(trains,orders,wagons);
    myActionPlan.canProductsBeDelivered();
    myActionPlan.CreatePlan();

    return 0;
}
