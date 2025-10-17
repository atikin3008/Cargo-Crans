#pragma once

#include<memory>
#include "Crans.h"

namespace Cran {
    class Port {
    public:
        Port(std::vector<std::shared_ptr<Crans>> crans) : crans_(crans) {}

        void addShip(std::shared_ptr<Ship::Ship> ship);

    private:
        std::vector<std::shared_ptr<Crans>> crans_;
    };
}
