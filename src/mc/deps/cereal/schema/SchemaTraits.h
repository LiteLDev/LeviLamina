#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cereal::internal {

enum class SchemaTraits : ushort {
    // bitfield representation
    NoTraits                  = 0,
    HasTopLevelSetters        = 1 << 0,
    IsRequired                = 1 << 1,
    IsDeprecated              = 1 << 2,
    IsDefaultSetter           = 1 << 3,
    IsMemberLevelSetterGetter = 1 << 4,
    IsKeyedSetterGetter       = 1 << 5,
    IsConstSelector           = 1 << 6,
    EnttEnumAsBitmask         = HasTopLevelSetters | IsConstSelector,
};

}
