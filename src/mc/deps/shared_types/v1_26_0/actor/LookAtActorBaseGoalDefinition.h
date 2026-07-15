#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/actor/BaseGoalDefinition.h"
#include "mc/deps/shared_types/shared_types/FloatRange.h"

namespace SharedTypes::v1_26_0 {

struct LookAtActorBaseGoalDefinition : public ::SharedTypes::BaseGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 8, ::SharedTypes::FloatRange> mLookTime;
    ::ll::TypedStorage<4, 4, float>                     mLookDistance;
    ::ll::TypedStorage<4, 4, float>                     mProbability;
    ::ll::TypedStorage<4, 4, int>                       mAngleOfViewX;
    ::ll::TypedStorage<4, 4, int>                       mAngleOfViewY;
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_0
