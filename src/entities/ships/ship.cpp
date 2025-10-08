#include "../../../include/entities/ships/Ship.h"

namespace Ship {
    Ship::Ship(
        std::string name,
        Utils::ShipTypes type,
        Utils::weight_t cargoWeight)
        : name_(name)
        , type_(type)
        , cargoWeight_(cargoWeight)
    {
    }

    std::string Ship::getName() const {
        return name_;
    }

    Utils::ShipTypes Ship::getType() const {
        return type_;
    }

    Utils::weight_t Ship::getCargoWeight() const {
        return cargoWeight_;
    }

    void Ship::unload(Utils::weight_t cargoWeight) {
        if (cargoWeight > cargoWeight_) {
            cargoWeight = cargoWeight_;
        }
        cargoWeight_ -= cargoWeight;
    }
}