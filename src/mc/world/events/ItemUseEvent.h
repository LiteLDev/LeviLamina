#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ItemUseEvent {
public:
    // prevent constructor by default
    ItemUseEvent& operator=(ItemUseEvent const&);
    ItemUseEvent();

public:
    // NOLINTBEGIN
    MCAPI ItemUseEvent(struct ItemUseEvent const&);

    MCAPI ~ItemUseEvent();

    // NOLINTEND
};
