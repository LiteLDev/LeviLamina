#pragma once

#include "mc/_HeaderOutputPredefine.h"

class InventoryAction {
public:
    // prevent constructor by default
    InventoryAction();

public:
    // NOLINTBEGIN
    MCAPI InventoryAction(class InventoryAction const&);

    MCAPI class InventoryAction& operator=(class InventoryAction const&);

    MCAPI ~InventoryAction();

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
