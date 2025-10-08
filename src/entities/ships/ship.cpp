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
}