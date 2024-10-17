#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorStartRidingEvent {
public:
    // prevent constructor by default
    ActorStartRidingEvent& operator=(ActorStartRidingEvent const&);
    ActorStartRidingEvent(ActorStartRidingEvent const&);
    ActorStartRidingEvent();

public:
    // NOLINTBEGIN
    MCAPI ~ActorStartRidingEvent();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};
