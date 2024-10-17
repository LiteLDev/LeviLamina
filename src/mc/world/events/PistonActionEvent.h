#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PistonActionEvent {
public:
    // prevent constructor by default
    PistonActionEvent& operator=(PistonActionEvent const&);
    PistonActionEvent(PistonActionEvent const&);
    PistonActionEvent();

public:
    // NOLINTBEGIN
    MCAPI ~PistonActionEvent();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};
