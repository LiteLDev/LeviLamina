#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct GiveableTrigger {
public:
    // prevent constructor by default
    GiveableTrigger& operator=(GiveableTrigger const&);
    GiveableTrigger();

public:
    // NOLINTBEGIN
    MCAPI GiveableTrigger(struct GiveableTrigger const&);

    MCAPI void addItem(class ItemDescriptor const& itemDescriptor);

    MCAPI ~GiveableTrigger();

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
