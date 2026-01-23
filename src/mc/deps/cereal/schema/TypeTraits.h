#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cereal::internal {

enum class TypeTraits : ushort {
    NoTraits                = 0,
    HasTopLevelSetters      = 1,
    HasTaggedVariantMembers = 2,
    HasDefaultMembers       = 4,
    EnttEnumAsBitmask       = 5,
};

}
