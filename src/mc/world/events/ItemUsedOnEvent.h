#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ItemUsedOnEvent {
public:
    // prevent constructor by default
    ItemUsedOnEvent& operator=(ItemUsedOnEvent const&);
    ItemUsedOnEvent(ItemUsedOnEvent const&);
    ItemUsedOnEvent();

public:
    // NOLINTBEGIN
    MCAPI ~ItemUsedOnEvent();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};
