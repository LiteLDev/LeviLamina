#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/network/IPlayerContainerSetter.h"

// auto generated forward declare list
// clang-format off
class ItemStack;
// clang-format on

class PlayerContainerSetter : public ::IPlayerContainerSetter {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk9fc8eb;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerContainerSetter& operator=(PlayerContainerSetter const&);
    PlayerContainerSetter(PlayerContainerSetter const&);
    PlayerContainerSetter();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~PlayerContainerSetter() /*override*/ = default;

    // vIndex: 1
    virtual void setArmor(int slot, ::ItemStack const& item) /*override*/;

    // vIndex: 2
    virtual void setOffhandSlot(::ItemStack const& item) /*override*/;

    // vIndex: 3
    virtual void setPlayerUIItem(int slot, ::ItemStack const& item) /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $setArmor(int slot, ::ItemStack const& item);

    MCAPI void $setOffhandSlot(::ItemStack const& item);

    MCAPI void $setPlayerUIItem(int slot, ::ItemStack const& item);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
