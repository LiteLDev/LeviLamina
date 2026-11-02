#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace EntityAttack {

struct TargetedActorPolicy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mClientPredictionRange;
    // NOLINTEND
};

} // namespace EntityAttack
