#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/actor/BaseGoalDefinition.h"
#include "mc/deps/shared_types/v1_21_120/actor/ActorDefinitionTrigger.h"

namespace SharedTypes::v1_21_120 {

struct DigGoalDefinition : public ::SharedTypes::BaseGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                                              mDuration;
    ::ll::TypedStorage<4, 4, float>                                              mIdleTimeSeconds;
    ::ll::TypedStorage<1, 1, bool>                                               mAllowDigWhenNamed;
    ::ll::TypedStorage<1, 1, bool>                                               mVibrationIsDisturbance;
    ::ll::TypedStorage<1, 1, bool>                                               mSuspicionIsDisturbance;
    ::ll::TypedStorage<1, 1, bool>                                               mDigsInDaylight;
    ::ll::TypedStorage<8, 272, ::SharedTypes::v1_21_120::ActorDefinitionTrigger> mOnStartEvent;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string_view const& NAME();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_120
