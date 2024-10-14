#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorHurtEvent {
public:
    // prevent constructor by default
    ActorHurtEvent& operator=(ActorHurtEvent const&);
    ActorHurtEvent(ActorHurtEvent const&);
    ActorHurtEvent();

public:
    // NOLINTBEGIN
    MCAPI ~ActorHurtEvent();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};
