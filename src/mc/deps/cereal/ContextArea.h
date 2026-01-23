#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cereal {

enum class ContextArea : uchar {
    Public            = 1,
    Vanilla           = 2,
    All               = 255,
    EnttEnumAsBitmask = 255,
};

}
