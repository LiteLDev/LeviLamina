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
    // vIndex: 0
    virtual ~PlayerContainerSetter() = default;

    // vIndex: 1
    virtual void setArmor(int slot, class ItemStack const& item);

    // vIndex: 2
    virtual void setOffhandSlot(class ItemStack const& item);

    // vIndex: 3
    virtual void setPlayerUIItem(int slot, class ItemStack const& item);

    MCAPI explicit PlayerContainerSetter(class Player& player);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(class Player& player);

    MCAPI void setArmor$(int slot, class ItemStack const& item);

    MCAPI void setOffhandSlot$(class ItemStack const& item);

    MCAPI void setPlayerUIItem$(int slot, class ItemStack const& item);

    // NOLINTEND
};
