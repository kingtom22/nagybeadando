#include <iostream>
#include "Train.h"
#include "Product.h"

using namespace std;

int main()
{
#ifdef DEBUG
    cout << "Debug mode!" << endl;
#else
    cout << "Release mode!" << endl;
#endif
    Train t1("vonat1schedule.txt");
    Train t2("vonat2schedule.txt");
    vector<Train> trains;
    trains.push_back(t1);
    trains.push_back(t2);
    Product eper("eper","A","E",35);
    if(eper.canReachDestination(trains))
        cout<<"hurrá"<<endl;

    Wagon w1("egyes vagon","A",10);
    Wagon w2("kettes vagon","B",15);
    t1.csatol(&w1);

    t1.lecsatol(&w1);

    w1.pakol(eper._name,eper._tracking[eper._source]);

    eper._tracking[eper._destination]=w1._load;
    w1.lepakol();

    return 0;
}
