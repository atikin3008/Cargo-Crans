//
// Created by Никита Комков on 04.10.2025.
//

#ifndef CARGO_AND_CRANS_PORT_H
#define CARGO_AND_CRANS_PORT_H

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
#endif //CARGO_AND_CRANS_PORT_H
