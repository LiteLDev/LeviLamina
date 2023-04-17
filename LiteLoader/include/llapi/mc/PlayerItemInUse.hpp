/**
 * @file  PlayerItemInUse.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "PlayerInventory.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class PlayerItemInUse {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYERITEMINUSE
public:
    class PlayerItemInUse& operator=(class PlayerItemInUse const &) = delete;
    PlayerItemInUse(class PlayerItemInUse const &) = delete;
    PlayerItemInUse() = delete;
#endif

public:
    /**
     * @symbol ?checkShouldUse\@PlayerItemInUse\@\@QEAA_NXZ
     */
    MCAPI bool checkShouldUse();
    /**
     * @symbol ?clearItemInUse\@PlayerItemInUse\@\@QEAAXAEAVEntityContext\@\@\@Z
     */
    MCAPI void clearItemInUse(class EntityContext &);
    /**
     * @symbol ?getItemInUse\@PlayerItemInUse\@\@QEBAAEBVItemStack\@\@XZ
     */
    MCAPI class ItemStack const & getItemInUse() const;
    /**
     * @symbol ?getMoveToMouthDuration\@PlayerItemInUse\@\@QEBAHXZ
     */
    MCAPI int getMoveToMouthDuration() const;
    /**
     * @symbol ?getUsedDuration\@PlayerItemInUse\@\@QEBAHXZ
     */
    MCAPI int getUsedDuration() const;
    /**
     * @symbol ?isInSlot\@PlayerItemInUse\@\@QEBA_NUSlotData\@PlayerInventory\@\@\@Z
     */
    MCAPI bool isInSlot(struct PlayerInventory::SlotData) const;
    /**
     * @symbol ?releaseUsing\@PlayerItemInUse\@\@QEAAXAEAVPlayer\@\@\@Z
     */
    MCAPI void releaseUsing(class Player &);
    /**
     * @symbol ?setItemInUse\@PlayerItemInUse\@\@QEAAXAEBVItemStack\@\@AEAVEntityContext\@\@HUSlotData\@PlayerInventory\@\@\@Z
     */
    MCAPI void setItemInUse(class ItemStack const &, class EntityContext &, int, struct PlayerInventory::SlotData);
    /**
     * @symbol ??1PlayerItemInUse\@\@QEAA\@XZ
     */
    MCAPI ~PlayerItemInUse();

};
