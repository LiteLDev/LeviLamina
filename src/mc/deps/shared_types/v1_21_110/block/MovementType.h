#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_21_110::BlockDefinition {

enum class MovementType : uchar {
    PushPull  = 0,
    Push      = 1,
    Popped    = 2,
    Immovable = 3,
    Size      = 4,
};

}
