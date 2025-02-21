#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ItemStack;
// clang-format on

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
    MCAPI ~EquipItemComponent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
