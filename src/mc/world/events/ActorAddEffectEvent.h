#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorAddEffectEvent {
public:
    // prevent constructor by default
    ActorAddEffectEvent& operator=(ActorAddEffectEvent const&);
    ActorAddEffectEvent();

public:
    // NOLINTBEGIN
    MCAPI ActorAddEffectEvent(struct ActorAddEffectEvent const&);

    MCAPI ~ActorAddEffectEvent();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(struct ActorAddEffectEvent const&);

    MCAPI void dtor$();

    // NOLINTEND
};
