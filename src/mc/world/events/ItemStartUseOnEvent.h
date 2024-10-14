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
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    // NOLINTEND
};
