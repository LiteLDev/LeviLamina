#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cereal::internal {

enum class TypeTraits : ushort {
    // bitfield representation
    NoTraits                    = 0,
    IsTaggedVariant             = 1 << 0,
    HasTaggedVariantMembers     = 1 << 1,
    HasDefaultMembers           = 1 << 2,
    DerivesFromComponentStorage = 1 << 3,
    EnttEnumAsBitmask           = IsTaggedVariant | DerivesFromComponentStorage,
};

}
