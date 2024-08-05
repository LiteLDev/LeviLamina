#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ItemStopUseEvent {
public:
    // prevent constructor by default
    ItemStopUseEvent& operator=(ItemStopUseEvent const&);
    ItemStopUseEvent(ItemStopUseEvent const&);
    ItemStopUseEvent();

public:
    // NOLINTBEGIN
    MCAPI ~ItemStopUseEvent();

    // NOLINTEND
};
