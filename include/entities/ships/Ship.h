//
// Created by Никита Комков on 03.10.2025.
//
#include "../../utils/types.h"
#include "../deviations/deviations.h"
#include <string>

namespace Ship {
    class Ship{
        std::string name_;
        Utils::ShipTypes type_;
        Utils::weight_t cargoWeight_;
        Ship(std::string name,
                   Utils::ShipTypes type,
                   Utils::weight_t cargoWeight);
        std::string getName() const;
        Utils::ShipTypes getType() const;
        Utils::weight_t getCargoWeight() const;
        void unload(Utils::weight_t cargoWeight);
    };
}
