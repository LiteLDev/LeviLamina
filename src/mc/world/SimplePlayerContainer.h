#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/SimpleContainer.h"

// auto generated forward declare list
// clang-format off
class ItemStack;
class Player;
// clang-format on

class SimplePlayerContainer : public ::SimpleContainer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Player&> mPlayer;
    // NOLINTEND

public:
    // prevent constructor by default
    SimplePlayerContainer& operator=(SimplePlayerContainer const&);
    SimplePlayerContainer(SimplePlayerContainer const&);
    SimplePlayerContainer();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SimplePlayerContainer() /*override*/ = default;

    virtual ::ItemStack const& getItem(int slot) const /*override*/;

    virtual void setItem(int modelSlot, ::ItemStack const& item) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::ItemStack const& $getItem(int slot) const;

    MCAPI void $setItem(int modelSlot, ::ItemStack const& item);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
