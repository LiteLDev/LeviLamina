#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/transaction/InventorySource.h"
#include "mc/world/item/ItemStack.h"
#include "mc/world/item/NetworkItemStackDescriptor.h"

// auto generated forward declare list
// clang-format off
class BlockPalette;
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
    // prevent constructor by default
    InventoryAction();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI InventoryAction(::InventoryAction const&);

    MCAPI InventoryAction(
        ::InventorySource                   source,
        uint                                slot,
        ::NetworkItemStackDescriptor const& fromItem,
        ::NetworkItemStackDescriptor const& toItem
    );

    MCAPI InventoryAction(::InventorySource source, uint slot, ::ItemStack const& fromItem, ::ItemStack const& toItem);

    MCAPI ::InventoryAction& operator=(::InventoryAction const&);

    MCAPI void postLoadItems(::BlockPalette& blockPalette, bool isClientSide);

    MCAPI ~InventoryAction();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::InventoryAction const&);

    MCAPI void* $ctor(
        ::InventorySource                   source,
        uint                                slot,
        ::NetworkItemStackDescriptor const& fromItem,
        ::NetworkItemStackDescriptor const& toItem
    );

    MCAPI void* $ctor(::InventorySource source, uint slot, ::ItemStack const& fromItem, ::ItemStack const& toItem);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
