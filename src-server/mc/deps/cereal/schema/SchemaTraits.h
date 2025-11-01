#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cereal::internal {

enum class SchemaTraits : ushort {
    // bitfield representation
    NoTraits = 0,
    HasTopLevelSetters = 1 << 0,
    IsRequired = 1 << 1,
    IsDefaultSetter = 1 << 2,
    IsMemberLevelSetterGetter = 1 << 3,
    IsKeyedSetterGetter = 1 << 4,
    IsConstSelector = 1 << 5,
    EnttEnumAsBitmask = HasTopLevelSetters | IsConstSelector,
};

}
