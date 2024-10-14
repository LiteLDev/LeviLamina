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
