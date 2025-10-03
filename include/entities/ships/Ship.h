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
        Utils::time_t arrivalSchedule_;
        Utils::time_t arrivalReal_;
        Ship(std::string name,
                   Utils::ShipTypes type,
                   Utils::weight_t cargoWeight,
                   Utils::time_t arrivalSchedule,
                   const Deviations::Deviations& deviations);
        std::string getName() const;
        Utils::ShipTypes getType() const;
        Utils::weight_t getCargoWeight() const;
        Utils::time_t getArrivalTime() const;
        Utils::time_t getDeviation() const;
        void unload(Utils::weight_t cargoWeight);
    };
}
