#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ItemStackResponseSlotInfo {
public:
    // prevent constructor by default
    ItemStackResponseSlotInfo& operator=(ItemStackResponseSlotInfo const&);
    ItemStackResponseSlotInfo(ItemStackResponseSlotInfo const&);
    ItemStackResponseSlotInfo();

public:
    // NOLINTBEGIN
    MCAPI ItemStackResponseSlotInfo(struct ItemStackResponseSlotInfo&&);

    MCAPI ~ItemStackResponseSlotInfo();

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
