#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cereal::internal {

enum class DescriptionExtra : uchar {
    // bitfield representation
    None                = 0,
    UnderlyingType      = 1 << 0,
    ControlValueType    = 1 << 1,
    SerializationTraits = 1 << 2,
    OrdinalIndex        = 1 << 3,
    NumericLimits       = 1 << 4,
    NonPublicFlag       = 1 << 5,
    NetworkingExtraInfo = UnderlyingType | ControlValueType | SerializationTraits | OrdinalIndex,
    EnttEnumAsBitmask   = 255,
};

}
