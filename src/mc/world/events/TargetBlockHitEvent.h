#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct TargetBlockHitEvent {
public:
    // prevent constructor by default
    TargetBlockHitEvent& operator=(TargetBlockHitEvent const&);
    TargetBlockHitEvent();

public:
    // NOLINTBEGIN
    MCAPI TargetBlockHitEvent(struct TargetBlockHitEvent const&);

    MCAPI ~TargetBlockHitEvent();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(struct TargetBlockHitEvent const&);

    MCAPI void dtor$();

    // NOLINTEND
};
