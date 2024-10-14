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
