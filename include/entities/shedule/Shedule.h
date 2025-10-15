//
// Created by Никита Комков on 05.10.2025.
//

#ifndef CARGO_AND_CRANS_SHEDULE_H
#define CARGO_AND_CRANS_SHEDULE_H

#include<algorithm>
#include<vector>
#include "../../utils/types.h"
#include "../ships/Ship.h"
#include "../../utils/types.h"

namespace Shedule {
    class Shedule {
    public:
        void addEvent(std::pair<Utils::time_t, std::shared_ptr<Ship::Ship>> event) {
            queue.push_back(event);
            std::sort(queue.begin(), queue.end());
        }

        std::vector<std::pair<Utils::time_t, std::shared_ptr<Ship::Ship>>> getEvents(Utils::time_t time) {
            std::vector<std::pair<Utils::time_t, std::shared_ptr<Ship::Ship>>> ans;
            for (int i = 0; i < queue.size(); ++i) {
                if (queue[i].first > time)
                    break;
                ans.push_back(queue[i]);
                ans.erase(ans.begin() + i);
                --i;
            }
            return ans;
        }

    private:
        std::vector<std::pair<Utils::time_t, std::shared_ptr<Ship::Ship>>> queue;
    };
}
#endif //CARGO_AND_CRANS_SHEDULE_H
