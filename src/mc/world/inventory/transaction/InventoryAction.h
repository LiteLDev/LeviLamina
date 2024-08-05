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
};
