#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PlayerContainerSetter {

public:
    // prevent constructor by default
    PlayerContainerSetter& operator=(PlayerContainerSetter const&) = delete;
    PlayerContainerSetter(PlayerContainerSetter const&)            = delete;
    PlayerContainerSetter()                                        = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?setArmor\@PlayerContainerSetter\@\@UEAAXHAEBVItemStack\@\@\@Z
     */
    virtual void setArmor(int, class ItemStack const&); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?setOffhandSlot\@PlayerContainerSetter\@\@UEAAXAEBVItemStack\@\@\@Z
     */
    virtual void setOffhandSlot(class ItemStack const&); // NOLINT
    /**
     * @vftbl 3
     * @symbol ?setPlayerUIItem\@PlayerContainerSetter\@\@UEAAXHAEBVItemStack\@\@\@Z
     */
    virtual void setPlayerUIItem(int, class ItemStack const&); // NOLINT
    /**
     * @symbol ??0PlayerContainerSetter\@\@QEAA\@AEAVPlayer\@\@\@Z
     */
    MCAPI PlayerContainerSetter(class Player&); // NOLINT
};
