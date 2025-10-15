//
// Created by Никита Комков on 03.10.2025.
//
#pragma once

#include "../entities/ships/Ship.h"
#include <memory>

namespace Utils {
    typedef signed int time_t;
    enum class Types {
        BULK_SHIP,
        LIQUID_SHIP,
        CONTAINER_SHIP
    };

    struct ScheduleShip {
        time_t end;
        std::shared_ptr<Ship::Ship> ship;
    };
}
//CARGO_AND_CRANS_TYPES_H
