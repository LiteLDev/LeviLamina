#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/network/IPlayerContainerSetter.h"

class PlayerContainerSetter : public ::IPlayerContainerSetter {
public:
    // prevent constructor by default
    PlayerContainerSetter& operator=(PlayerContainerSetter const&);
    PlayerContainerSetter(PlayerContainerSetter const&);
    PlayerContainerSetter();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1PlayerContainerSetter@@UEAA@XZ
    virtual ~PlayerContainerSetter() = default;

    // vIndex: 1, symbol: ?setArmor@PlayerContainerSetter@@UEAAXHAEBVItemStack@@@Z
    virtual void setArmor(int, class ItemStack const&);

    // vIndex: 2, symbol: ?setOffhandSlot@PlayerContainerSetter@@UEAAXAEBVItemStack@@@Z
    virtual void setOffhandSlot(class ItemStack const&);

    // vIndex: 3, symbol: ?setPlayerUIItem@PlayerContainerSetter@@UEAAXHAEBVItemStack@@@Z
    virtual void setPlayerUIItem(int, class ItemStack const&);

    // symbol: ??0PlayerContainerSetter@@QEAA@AEAVPlayer@@@Z
    MCAPI explicit PlayerContainerSetter(class Player&);

    // NOLINTEND
};
