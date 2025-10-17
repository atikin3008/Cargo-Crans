#include"../../../include/entities/crans/Port.h"

namespace Cran {
    void Port::addShip(std::shared_ptr<Ship::Ship> ship) {
        for(auto &it : crans_)
            if (it->getType() == ship->getType())
                it->addShip(ship);
    }
}