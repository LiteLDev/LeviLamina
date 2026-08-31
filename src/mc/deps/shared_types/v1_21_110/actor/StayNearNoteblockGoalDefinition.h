#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/actor/BaseGoalDefinition.h"

namespace SharedTypes::v1_21_110 {

struct StayNearNoteblockGoalDefinition : public ::SharedTypes::BaseGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mSpeed;
    ::ll::TypedStorage<4, 4, float> mStartDistance;
    ::ll::TypedStorage<4, 4, float> mStopDistance;
    ::ll::TypedStorage<4, 4, int>   mListenTime;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static float const& DEFAULT_SPEED();

    MCAPI static float const& DEFAULT_START_DISTANCE();

    MCAPI static float const& DEFAULT_STOP_DISTANCE();

    MCAPI static ::std::string_view const& NAME();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_110
