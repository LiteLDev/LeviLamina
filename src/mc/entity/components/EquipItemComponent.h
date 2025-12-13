#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/ItemStack.h"

struct EquipItemComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 152, ::ItemStack> mItemStack;
    ::ll::TypedStorage<1, 1, bool>          mHasItemToEquip;
    ::ll::TypedStorage<4, 4, int>           mCountToPickup;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~EquipItemComponent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
