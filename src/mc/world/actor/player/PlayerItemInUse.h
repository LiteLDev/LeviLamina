#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PlayerItemInUse {
public:
    // prevent constructor by default
    PlayerItemInUse& operator=(PlayerItemInUse const&);
    PlayerItemInUse(PlayerItemInUse const&);
    PlayerItemInUse();

public:
    // NOLINTBEGIN
    // symbol: ?checkShouldUse@PlayerItemInUse@@QEAA_NXZ
    MCAPI bool checkShouldUse();

    // symbol: ?clearItemInUse@PlayerItemInUse@@QEAAXAEAVEntityContext@@@Z
    MCAPI void clearItemInUse(class EntityContext&);

    // symbol: ?getItemInUse@PlayerItemInUse@@QEBAAEBVItemStack@@XZ
    MCAPI class ItemStack const& getItemInUse() const;

    // symbol: ?getMoveToMouthDuration@PlayerItemInUse@@QEBAHXZ
    MCAPI int getMoveToMouthDuration() const;

    // symbol: ?getUsedDuration@PlayerItemInUse@@QEBAHXZ
    MCAPI int getUsedDuration() const;

    // symbol: ?isInSlot@PlayerItemInUse@@QEBA_NUPlayerInventorySlotData@@@Z
    MCAPI bool isInSlot(struct PlayerInventorySlotData) const;

    // symbol: ?releaseUsing@PlayerItemInUse@@QEAAXAEAVPlayer@@@Z
    MCAPI void releaseUsing(class Player&);

    // symbol: ?setItemInUse@PlayerItemInUse@@QEAAXAEBVItemStack@@AEAVEntityContext@@HUPlayerInventorySlotData@@@Z
    MCAPI void setItemInUse(class ItemStack const&, class EntityContext&, int, struct PlayerInventorySlotData);

    // symbol: ??1PlayerItemInUse@@QEAA@XZ
    MCAPI ~PlayerItemInUse();

    // NOLINTEND
};
