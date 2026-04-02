#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ActorDefinitionTrigger;
// clang-format on

class SchedulerDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::ActorDefinitionTrigger>> mTriggerDefs;
    ::ll::TypedStorage<4, 4, uint>                                     mMinDelayTicks;
    ::ll::TypedStorage<4, 4, uint>                                     mMaxDelayTicks;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void setMaxDelayTicks(float const& seconds);

    MCAPI void setMinDelayTicks(float const& seconds);
    // NOLINTEND
};
