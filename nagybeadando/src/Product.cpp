#include "Product.h"
#include <algorithm>
#include <iterator>
#include <iostream>

using namespace std;

Product::Product(std::string name,std::string source, std::string destination, int quantity) : _name(name), _source(source), _destination(destination)
{
    //ctor
    _tracking[source]=quantity;
}
bool Product::canReachDestination(vector<Train>& trains)
{
    vector<Train> sc_trains;
    vector<Train> de_trains;
    for(Train& T:trains)
    {
        string s=_source;
        auto it_sc=find_if(T._schedule.begin(),T._schedule.end(),[s](const pair<int,string>& p){return p.second==s;});
        s=_destination;
        auto it_de=find_if(T._schedule.begin(),T._schedule.end(),[s](const pair<int,string>& p){return p.second==s;});

        if(it_sc!=T._schedule.end() && it_de!=T._schedule.end())
            return true;
        else if(it_sc!=T._schedule.end())
            sc_trains.push_back(T);
        else if(it_de!=T._schedule.end())
            de_trains.push_back(T);
    }
    vector<string> stations;
    for(Train& T:sc_trains)
    {
        for(pair<int,string>& item:T._schedule)
        {
            if(find(stations.begin(),stations.end(),item.second)==stations.end())
                stations.push_back(item.second);
        }
    }
    for(Train& T:de_trains)
    {
        for(pair<int,string>& item:T._schedule)
        {
            if(find(stations.begin(),stations.end(),item.second)!=stations.end())
                return true;
        }
    }
    return false;
}
