#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cereal {

enum class SchemaRWType : uchar {
    // bitfield representation
    Invalid           = 0,
    Object            = 1 << 0,
    Array             = 1 << 1,
    Other             = 1 << 2,
    EnttEnumAsBitmask = Object | Other,
};

}
