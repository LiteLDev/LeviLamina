#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/player/PlayerInventory.h"

class PlayerItemInUse {

public:
    // prevent constructor by default
    PlayerItemInUse& operator=(PlayerItemInUse const&) = delete;
    PlayerItemInUse(PlayerItemInUse const&)            = delete;
    PlayerItemInUse()                                  = delete;

public:
    /**
     * @symbol ?checkShouldUse\@PlayerItemInUse\@\@QEAA_NXZ
     */
    MCAPI bool checkShouldUse(); // NOLINT
    /**
     * @symbol ?clearItemInUse\@PlayerItemInUse\@\@QEAAXAEAVEntityContext\@\@\@Z
     */
    MCAPI void clearItemInUse(class EntityContext&); // NOLINT
    /**
     * @symbol ?getItemInUse\@PlayerItemInUse\@\@QEBAAEBVItemStack\@\@XZ
     */
    MCAPI class ItemStack const& getItemInUse() const; // NOLINT
    /**
     * @symbol ?getMoveToMouthDuration\@PlayerItemInUse\@\@QEBAHXZ
     */
    MCAPI int getMoveToMouthDuration() const; // NOLINT
    /**
     * @symbol ?getUsedDuration\@PlayerItemInUse\@\@QEBAHXZ
     */
    MCAPI int getUsedDuration() const; // NOLINT
    /**
     * @symbol ?isInSlot\@PlayerItemInUse\@\@QEBA_NUSlotData\@PlayerInventory\@\@\@Z
     */
    MCAPI bool isInSlot(struct PlayerInventory::SlotData) const; // NOLINT
    /**
     * @symbol ?releaseUsing\@PlayerItemInUse\@\@QEAAXAEAVPlayer\@\@\@Z
     */
    MCAPI void releaseUsing(class Player&); // NOLINT
    /**
     * @symbol
     * ?setItemInUse\@PlayerItemInUse\@\@QEAAXAEBVItemStack\@\@AEAVEntityContext\@\@HUSlotData\@PlayerInventory\@\@\@Z
     */
    MCAPI void
    setItemInUse(class ItemStack const&, class EntityContext&, int, struct PlayerInventory::SlotData); // NOLINT
    /**
     * @symbol ??1PlayerItemInUse\@\@QEAA\@XZ
     */
    MCAPI ~PlayerItemInUse(); // NOLINT
};
