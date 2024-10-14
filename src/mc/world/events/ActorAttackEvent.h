#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorAttackEvent {
public:
    // prevent constructor by default
    ActorAttackEvent& operator=(ActorAttackEvent const&);
    ActorAttackEvent(ActorAttackEvent const&);
    ActorAttackEvent();

public:
    // NOLINTBEGIN
    MCAPI ~ActorAttackEvent();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};
