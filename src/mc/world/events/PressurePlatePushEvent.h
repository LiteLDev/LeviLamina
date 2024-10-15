#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PressurePlatePushEvent {
public:
    // prevent constructor by default
    PressurePlatePushEvent& operator=(PressurePlatePushEvent const&);
    PressurePlatePushEvent();

public:
    // NOLINTBEGIN
    MCAPI PressurePlatePushEvent(struct PressurePlatePushEvent const&);

    MCAPI ~PressurePlatePushEvent();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(struct PressurePlatePushEvent const&);

    MCAPI void dtor$();

    // NOLINTEND
};
