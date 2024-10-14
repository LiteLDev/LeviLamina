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
    MCAPI bool checkShouldUse();

    MCAPI void clearItemInUse(class EntityContext& owner);

    MCAPI class ItemStack const& getItemInUse() const;

    MCAPI int getMoveToMouthDuration() const;

    MCAPI int getUsedDuration() const;

    MCAPI bool isInSlot(struct PlayerInventorySlotData slot) const;

    MCAPI void releaseUsing(class Player& player);

    MCAPI void setItemInUse(
        class ItemStack const&         newItem,
        class EntityContext&           owner,
        int                            duration,
        struct PlayerInventorySlotData slot
    );

    MCAPI ~PlayerItemInUse();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};
