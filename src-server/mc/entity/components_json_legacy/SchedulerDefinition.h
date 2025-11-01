#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SchedulerDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk3bbcac;
    ::ll::UntypedStorage<4, 4> mUnk854e15;
    ::ll::UntypedStorage<4, 4> mUnk92c9e3;
    // NOLINTEND

public:
    // prevent constructor by default
    SchedulerDefinition& operator=(SchedulerDefinition const&);
    SchedulerDefinition(SchedulerDefinition const&);
    SchedulerDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void setMaxDelayTicks(float const& seconds);

    MCNAPI void setMinDelayTicks(float const& seconds);
    // NOLINTEND

};
