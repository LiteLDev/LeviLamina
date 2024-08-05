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
};
