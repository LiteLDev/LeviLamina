#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ItemStartUseOnEvent {
public:
    // prevent constructor by default
    ItemStartUseOnEvent& operator=(ItemStartUseOnEvent const&);
    ItemStartUseOnEvent();

public:
    // NOLINTBEGIN
    MCAPI ItemStartUseOnEvent(struct ItemStartUseOnEvent const&);

    MCAPI ~ItemStartUseOnEvent();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(struct ItemStartUseOnEvent const&);

    MCAPI void dtor$();

    // NOLINTEND
};
