#pragma once

#include<algorithm>
#include<vector>
#include "../../utils/types.h"
#include "../ships/Ship.h"
#include "../../utils/types.h"

namespace Shedule {
    class Shedule {
    public:
        void addEvent(std::pair<Utils::time_t, std::shared_ptr<Ship::Ship>> event);

        std::vector<std::pair<Utils::time_t, std::shared_ptr<Ship::Ship>>> getEvents(Utils::time_t time);
    private:
        std::vector<std::pair<Utils::time_t, std::shared_ptr<Ship::Ship>>> queue;
    };
}
