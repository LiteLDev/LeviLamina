#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes {

enum class PushMode : uchar {
    None           = 0,
    Default        = 1,
    LegacyBoat     = 2,
    LegacyMinecart = 3,
    Ball           = 4,
};

}
