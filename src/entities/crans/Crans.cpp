#include "../../../include/entities/crans/Crans.h"

namespace Cran {
    void Crans::update(Utils::time_t time) {
        bool inCran = true;
        while (inCran) {
            inCran = false;
            for (auto &it: crans_) {
                if (!it->isBusy(time)){
                    it->setShip(ships_.front());
                    inCran = false;
                }
            }
        }
    }
    Crans::Crans(Utils::ShipTypes type, const std::vector<std::shared_ptr<Cran>> &crans) : type_(type), crans_(crans) {
        for (auto &it: crans_)
            if (it->get_type() != type) {
                throw ErrorCrans("Different types of crans on intialize");
            }
    }
}