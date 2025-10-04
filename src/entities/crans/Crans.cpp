#include "../../../include/entities/crans/Crans.h"

namespace Cran {
    void Crans::update() {
        bool inCran = true;
        while (inCran) {
            inCran = false;
            for (auto &it: crans_) {
                if (!it->isBusy()){
                    it->addShip(ships_.front());
                    inCran = false;
                }
            }
        }
    }
}