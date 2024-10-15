#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ExplosionStartedEvent {
public:
    // prevent constructor by default
    ExplosionStartedEvent& operator=(ExplosionStartedEvent const&);
    ExplosionStartedEvent();

public:
    // NOLINTBEGIN
    MCAPI ExplosionStartedEvent(struct ExplosionStartedEvent const&);

    MCAPI ~ExplosionStartedEvent();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(struct ExplosionStartedEvent const&);

    MCAPI void dtor$();

    // NOLINTEND
};
