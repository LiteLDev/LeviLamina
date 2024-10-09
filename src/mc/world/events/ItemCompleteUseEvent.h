#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ItemCompleteUseEvent {
public:
    // prevent constructor by default
    ItemCompleteUseEvent& operator=(ItemCompleteUseEvent const&);
    ItemCompleteUseEvent(ItemCompleteUseEvent const&);
    ItemCompleteUseEvent();

public:
    // NOLINTBEGIN
    MCAPI ~ItemCompleteUseEvent();

    // NOLINTEND
};
