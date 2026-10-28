#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace EntityAttack {

struct TargetedActorRangeValidation {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mDistance;
    ::ll::TypedStorage<4, 4, float> mMaximumDistance;
    // NOLINTEND
};

} // namespace EntityAttack
