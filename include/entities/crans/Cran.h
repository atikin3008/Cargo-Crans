//
// Created by Никита Комков on 03.10.2025.
//
#pragma once

#include "../../utils/types.h"
#include "../ships/Ship.h"
#include<memory>

#ifndef CARGO_CRANS_CRAN_H
#define CARGO_CRANS_CRAN_H
namespace Cran {
    class Cran {
    public:
        Cran(Utils::Types type) : type_(type), ship_(nullptr), end_(0) {}

    private:
        Utils::Types type_;
        std::shared_ptr<Ship::Ship> ship_;
        Utils::time_t end_;
    };
}
#endif //CARGO_CRANS_CRAN_H
