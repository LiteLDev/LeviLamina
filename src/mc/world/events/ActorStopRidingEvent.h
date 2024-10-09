#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorStopRidingEvent {
public:
    // prevent constructor by default
    ActorStopRidingEvent& operator=(ActorStopRidingEvent const&);
    ActorStopRidingEvent();

public:
    // NOLINTBEGIN
    MCAPI ActorStopRidingEvent(struct ActorStopRidingEvent const&);

    MCAPI ~ActorStopRidingEvent();

    // NOLINTEND
};
