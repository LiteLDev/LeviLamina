#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cereal::internal {

enum class TypeTraits : ushort {
    // bitfield representation
    NoTraits                = 0,
    IsTaggedVariant         = 1 << 0,
    HasTopLevelSetters      = 1 << 1,
    HasTaggedVariantMembers = 1 << 2,
    HasDefaultMembers       = 1 << 3,
    EnttEnumAsBitmask       = IsTaggedVariant | HasDefaultMembers,
};

}
