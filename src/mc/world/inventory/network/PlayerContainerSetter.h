#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/network/IPlayerContainerSetter.h"

class PlayerContainerSetter : public ::IPlayerContainerSetter {

public:
    // prevent constructor by default
    PlayerContainerSetter& operator=(PlayerContainerSetter const&) = delete;
    PlayerContainerSetter(PlayerContainerSetter const&)            = delete;
    PlayerContainerSetter()                                        = delete;

public:
    // NOLINTBEGIN
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
    // NOLINTEND
};
