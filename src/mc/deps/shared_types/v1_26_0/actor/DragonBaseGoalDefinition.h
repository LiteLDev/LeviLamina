#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/actor/BaseGoalDefinition.h"
#include "mc/deps/shared_types/shared_types/FloatRange.h"

namespace SharedTypes::v1_26_0 {

struct DragonBaseGoalDefinition : public ::SharedTypes::BaseGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                     mActiveSpeed;
    ::ll::TypedStorage<4, 4, float>                     mFlightSpeed;
    ::ll::TypedStorage<4, 4, float>                     mTurnSpeed;
    ::ll::TypedStorage<4, 8, ::SharedTypes::FloatRange> mTargetZone;
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_0
