#ifndef TRAIN_H
#define TRAIN_H

#include "Wagon.h"
#include <vector>


class Train : public Vehicle
{
    public:
        Train(std::string filename);
        bool csatol(Wagon* w);
        void lecsatol(Wagon* w);

        std::vector<Wagon*> _wagons;
        std::vector<std::pair<int,std::string>> _schedule;
        unsigned _maxWagons;

    protected:

    private:
};

#endif // TRAIN_H
