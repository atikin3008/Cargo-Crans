#pragma once

#include "../../utils/types.h"
#include "../ships/Ship.h"
#include<memory>

namespace Cran {
    class Cran {
     public:
        Cran(Utils::ShipTypes type) : type_(type), ship_(nullptr), end_(0) {}

        bool isBusy(Utils::time_t time);

        void setShip(std::shared_ptr<Ship::Ship> ship) { ship_ = ship; }

        Utils::ShipTypes get_type() { return type_; }
    private:
        Utils::ShipTypes type_;
        std::shared_ptr<Ship::Ship> ship_;
        Utils::time_t end_;
    };
}
