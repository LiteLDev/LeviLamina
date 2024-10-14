#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorStandOnBlockEvent {
public:
    // prevent constructor by default
    ActorStandOnBlockEvent& operator=(ActorStandOnBlockEvent const&);
    ActorStandOnBlockEvent(ActorStandOnBlockEvent const&);
    ActorStandOnBlockEvent();

public:
    // NOLINTBEGIN
    MCAPI ~ActorStandOnBlockEvent();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};
