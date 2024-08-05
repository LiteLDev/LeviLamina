#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ItemStartUseEvent {
public:
    // prevent constructor by default
    ItemStartUseEvent& operator=(ItemStartUseEvent const&);
    ItemStartUseEvent(ItemStartUseEvent const&);
    ItemStartUseEvent();

public:
    // NOLINTBEGIN
    MCAPI ~ItemStartUseEvent();

    // NOLINTEND
};
