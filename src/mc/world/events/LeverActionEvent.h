#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct LeverActionEvent {
public:
    // prevent constructor by default
    LeverActionEvent& operator=(LeverActionEvent const&);
    LeverActionEvent();

public:
    // NOLINTBEGIN
    MCAPI LeverActionEvent(struct LeverActionEvent const&);

    MCAPI ~LeverActionEvent();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(struct LeverActionEvent const&);

    MCAPI void dtor$();

    // NOLINTEND
};
