#pragma once

#include "../../utils/types.h"
#include <string>

namespace Ship {
    class Ship{
     public:
        Ship(std::string name,
                   Utils::ShipTypes type,
                   Utils::weight_t cargoWeight);
        std::string getName() const;
        Utils::ShipTypes getType() const;
        Utils::weight_t getCargoWeight() const;
        void unload(Utils::weight_t cargoWeight);
     private:
        std::string name_;
        Utils::ShipTypes type_;
        Utils::weight_t cargoWeight_;
    };
}
