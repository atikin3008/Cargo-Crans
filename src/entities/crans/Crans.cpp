#include "../../../include/entities/crans/Crans.h"

namespace Cran {
    void Crans::update(Utils::time_t time) {
        bool inCran = true;
        while (inCran) {
            inCran = false;
            for (auto &it: crans_) {
                if (!it->isBusy(time)){
                    it->addShip(ships_.front());
                    inCran = false;
                }
            }
        }
    }
}