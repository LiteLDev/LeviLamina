#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_26_10 {

enum class MovementType : uchar {
    PushPull  = 0,
    Push      = 1,
    Popped    = 2,
    Immovable = 3,
    Size      = 4,
};

}
