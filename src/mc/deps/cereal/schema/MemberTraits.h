#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cereal::internal {

enum class MemberTraits : ushort {
    // bitfield representation
    NoTraits                  = 0,
    IsRequired                = 1 << 0,
    IsDefaultSetter           = 1 << 1,
    IsMemberLevelSetterGetter = 1 << 2,
    IsKeyedSetterGetter       = 1 << 3,
    IsConstSelector           = 1 << 4,
    HasDefaultValue           = 1 << 5,
    EnttEnumAsBitmask         = IsRequired | HasDefaultValue,
};

}
