#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class InventorySource;
class ItemStack;
class NetworkItemStackDescriptor;
// clang-format on

class InventoryAction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::InventorySource>            mSource;
    ::ll::TypedStorage<4, 4, uint>                          mSlot;
    ::ll::TypedStorage<8, 96, ::NetworkItemStackDescriptor> mFromItemDescriptor;
    ::ll::TypedStorage<8, 96, ::NetworkItemStackDescriptor> mToItemDescriptor;
    ::ll::TypedStorage<8, 152, ::ItemStack>                 mFromItem;
    ::ll::TypedStorage<8, 152, ::ItemStack>                 mToItem;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI InventoryAction(::InventoryAction const&);

    MCAPI ::InventoryAction& operator=(::InventoryAction const&);

    MCAPI ~InventoryAction();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::InventoryAction const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
