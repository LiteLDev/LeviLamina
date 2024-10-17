#pragma once

#include "mc/_HeaderOutputPredefine.h"

class EquipItemComponent {
public:
    // prevent constructor by default
    EquipItemComponent& operator=(EquipItemComponent const&);
    EquipItemComponent(EquipItemComponent const&);
    EquipItemComponent();

public:
    // NOLINTBEGIN
    MCAPI void onEquipItemPickedUp(class ItemStack item, int countToPickup);

    MCAPI ~EquipItemComponent();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};
