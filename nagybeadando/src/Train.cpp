#include <fstream>
#include <iostream>
#include <algorithm>
#include <iterator>
#include "Train.h"

using namespace std;

Train::Train(std::string filename)
{
    //ctor
    ifstream f(filename);
    if(!f.good())
        cout<<"liba! "<<filename<<" megnyitása nem sikerült :("<<endl;
    else
    {
        f>>_name;
        f>>_maxWagons;
        string place;
        int time;
        while(f>>place>>time)
            _schedule.push_back(pair<int,string>(time,place));
        f.close();
    }
}

bool Train::csatol(Wagon* w)
{
    if(_wagons.size()<(size_t)_maxWagons)
    {
        _wagons.push_back(w);
        return true;
    }
    else return false;
}

void Train::lecsatol(Wagon* w)
{
    string name=w->_name;
    _wagons.erase(find(_wagons.begin(),_wagons.end(),w));
}
