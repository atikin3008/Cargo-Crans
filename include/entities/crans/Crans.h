#pragma once

#include<vector>
#include<memory>
#include<queue>
#include "Cran.h"
#include "../../utils/types.h"
#include "../../exceptions/Exceptions.h"
#include "../ships/Ship.h"

namespace Cran {
    class Crans {
    public:
        Crans(Utils::ShipTypes type, const std::vector<std::shared_ptr<Cran>> &crans);

        void addShip(std::shared_ptr<Ship::Ship> ship) { ships_.push(ship); }

        void update(Utils::time_t);

        Utils::ShipTypes getType() { return type_; }

    private:
        Utils::ShipTypes type_;
        std::vector<std::shared_ptr<Cran>> crans_;
        std::queue<std::shared_ptr<Ship::Ship>> ships_;
    };
}
