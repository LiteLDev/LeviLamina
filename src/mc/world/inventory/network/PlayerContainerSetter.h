#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PlayerContainerSetter {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYERCONTAINERSETTER
public:
    PlayerContainerSetter& operator=(PlayerContainerSetter const&) = delete;
    PlayerContainerSetter(PlayerContainerSetter const&)            = delete;
    PlayerContainerSetter()                                        = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?setArmor\@PlayerContainerSetter\@\@UEAAXHAEBVItemStack\@\@\@Z
     */
    virtual void setArmor(int, class ItemStack const&);
    /**
     * @vftbl 2
     * @symbol ?setOffhandSlot\@PlayerContainerSetter\@\@UEAAXAEBVItemStack\@\@\@Z
     */
    virtual void setOffhandSlot(class ItemStack const&);
    /**
     * @vftbl 3
     * @symbol ?setPlayerUIItem\@PlayerContainerSetter\@\@UEAAXHAEBVItemStack\@\@\@Z
     */
    virtual void setPlayerUIItem(int, class ItemStack const&);
    /**
     * @symbol ??0PlayerContainerSetter\@\@QEAA\@AEAVPlayer\@\@\@Z
     */
    MCAPI PlayerContainerSetter(class Player&);
};
