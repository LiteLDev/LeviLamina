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
    // symbol: ?onEquipItemPickedUp@EquipItemComponent@@QEAAXVItemStack@@H@Z
    MCAPI void onEquipItemPickedUp(class ItemStack item, int);

    // symbol: ??1EquipItemComponent@@QEAA@XZ
    MCAPI ~EquipItemComponent();

    // NOLINTEND
};
