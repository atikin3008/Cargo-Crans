//
// Created by Никита Комков on 03.10.2025.
//
#pragma once

#include "../../utils/types.h"
#include "../ships/Ship.h"
#include<memory>

namespace Cran {
    class Cran {
    public:
        Cran(Utils::ShipTypes type) : type_(type), ship_(nullptr), end_(0) {}

    private:
        Utils::ShipTypes type_;
        std::shared_ptr<Ship::Ship> ship_;
        Utils::time_t end_;
    };
}
