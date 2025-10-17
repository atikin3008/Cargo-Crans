#include "../../../include/entities/crans/Cran.h"

namespace Cran {
    bool Cran::isBusy(Utils::time_t time) {
        if (ship_.get() == nullptr)
            return true;
        if (time >= end_)
            return true;
        return false;
    }
}