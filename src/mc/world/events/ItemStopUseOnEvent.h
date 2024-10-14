#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ItemStopUseOnEvent {
public:
    // prevent constructor by default
    ItemStopUseOnEvent& operator=(ItemStopUseOnEvent const&);
    ItemStopUseOnEvent();

public:
    // NOLINTBEGIN
    MCAPI ItemStopUseOnEvent(struct ItemStopUseOnEvent const&);

    MCAPI ~ItemStopUseOnEvent();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    // NOLINTEND
};
