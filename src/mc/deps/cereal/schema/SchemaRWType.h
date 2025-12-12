#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cereal {

enum class SchemaRWType : uchar {
    Invalid           = 0,
    Object            = 1,
    Array             = 2,
    Other             = 4,
    EnttEnumAsBitmask = 5,
};

}
