#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorRemovedEvent {
public:
    // prevent constructor by default
    ActorRemovedEvent& operator=(ActorRemovedEvent const&);
    ActorRemovedEvent(ActorRemovedEvent const&);
    ActorRemovedEvent();

public:
    // NOLINTBEGIN
    MCAPI ~ActorRemovedEvent();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};
