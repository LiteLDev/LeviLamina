#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/network/IPlayerContainerSetter.h"

// auto generated forward declare list
// clang-format off
class ItemStack;
class Player;
// clang-format on

class PlayerContainerSetter : public ::IPlayerContainerSetter {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Player&> mPlayer;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerContainerSetter& operator=(PlayerContainerSetter const&);
    PlayerContainerSetter(PlayerContainerSetter const&);
    PlayerContainerSetter();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PlayerContainerSetter() /*override*/ = default;

    virtual void setArmor(int slot, ::ItemStack const& item) /*override*/;

    virtual void setOffhandSlot(::ItemStack const& item) /*override*/;

    virtual void setPlayerUIItem(int slot, ::ItemStack const& item) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $setArmor(int slot, ::ItemStack const& item);

    MCNAPI void $setOffhandSlot(::ItemStack const& item);

    MCNAPI void $setPlayerUIItem(int slot, ::ItemStack const& item);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
