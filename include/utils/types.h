//
// Created by Никита Комков on 03.10.2025.
//
#pragma once

#include "../entities/ships/Ship.h"
#include <memory>

namespace Utils {
    typedef signed int time_t;
    typedef signed int weight_t;
    enum class ShipTypes {
        BULK,
        LIQUID,
        CONTAINER
    };

    struct ScheduleShip {
        time_t end;
        std::shared_ptr<Ship::Ship> ship;
    };
}
