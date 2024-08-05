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
};
