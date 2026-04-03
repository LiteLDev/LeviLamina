#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_26_10 {

enum class ConnectionID : uchar {
    Fence            = 0,
    NetherBrickFence = 1,
    Wall             = 2,
    ThinFence        = 3,
    Count            = 4,
};

}
