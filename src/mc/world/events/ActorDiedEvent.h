#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorDiedEvent {
public:
    // prevent constructor by default
    ActorDiedEvent& operator=(ActorDiedEvent const&);
    ActorDiedEvent(ActorDiedEvent const&);
    ActorDiedEvent();

public:
    // NOLINTBEGIN
    MCAPI ~ActorDiedEvent();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};
