#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct CraftUISetResultNameEvent {
public:
    // prevent constructor by default
    CraftUISetResultNameEvent& operator=(CraftUISetResultNameEvent const&);
    CraftUISetResultNameEvent(CraftUISetResultNameEvent const&);
    CraftUISetResultNameEvent();

public:
    // NOLINTBEGIN
    MCAPI ~CraftUISetResultNameEvent();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};
