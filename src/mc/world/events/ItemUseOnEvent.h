#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ItemUseOnEvent {
public:
    // prevent constructor by default
    ItemUseOnEvent& operator=(ItemUseOnEvent const&);

public:
    // NOLINTBEGIN
    MCAPI ItemUseOnEvent();

    MCAPI ItemUseOnEvent(struct ItemUseOnEvent&&);

    MCAPI ItemUseOnEvent(struct ItemUseOnEvent const&);

    MCAPI ~ItemUseOnEvent();

    // NOLINTEND
};
