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

    vector<Product> products;
    Product eper("eper","A","C",35);
    Product retek("retek","B","D",10);
    Product rebarbara("rebarbara","A","D",100);
    products.push_back(eper);
    products.push_back(retek);
    products.push_back(rebarbara);

    vector<Wagon> wagons;
    Wagon w1("egyes vagon","A",10);
    Wagon w2("kettes vagon","B",15);
    wagons.push_back(w1);
    wagons.push_back(w2);

    ActionPlan myActionPlan(trains,products,wagons);
    myActionPlan.canProductsBeDelivered();
    myActionPlan.CreatePlan();
/*
    w1.pakol(eper._name,eper._tracking[eper._source]);

    eper._tracking[eper._destination]=w1._load;
    w1.lepakol();
*/
    return 0;
}
