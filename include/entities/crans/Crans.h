#pragma once

#include<vector>
#include<memory>
#include "Cran.h"
#include "../../utils/types.h"
#include "../../exceptions/Exceptions.h"
#include "../ships/Ship.h"

namespace Cran {
    class Crans {
    public:
        Crans(Utils::ShipTypes type, const std::vector<std::shared_ptr<Cran>> &crans) : type_(type), crans_(crans) {
            for (auto &it: crans_)
                if (it->get_type() != type) {
                    throw ErrorCrans("Different types of crans on intialize");
                }
        }

        void addShip(std::shared_ptr<Ship::Ship> ship) { ships_.push_back(ship); }

        void update(Utils::time_t);

        Utils::ShipTypes getType() { return type_; }

    private:
        Utils::ShipTypes type_;
        std::vector<std::shared_ptr<Cran>> crans_;
        std::vector<std::shared_ptr<Ship::Ship>> ships_;
    };
}
