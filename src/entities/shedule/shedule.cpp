#include "../../../include/entities/shedule/Shedule.h"
namespace Shedule {
    void Shedule::addEvent(std::pair<Utils::time_t, std::shared_ptr<Ship::Ship>> event) {
        queue.push_back(event);
        std::sort(queue.begin(), queue.end());
    }
    std::vector<std::pair<Utils::time_t, std::shared_ptr<Ship::Ship>>> Shedule::getEvents(Utils::time_t time) {
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

}