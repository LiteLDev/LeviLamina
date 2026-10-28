#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/gamemode/entity_attack/ValidationMode.h"

namespace EntityAttack {

struct ValidationSettings {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::EntityAttack::ValidationMode> mRequestCompatibilityMode;
    ::ll::TypedStorage<1, 1, ::EntityAttack::ValidationMode> mTargetedActorRangeMode;
    ::ll::TypedStorage<4, 4, float>                          mTargetedActorRangeTolerance;
    // NOLINTEND
};

} // namespace EntityAttack
