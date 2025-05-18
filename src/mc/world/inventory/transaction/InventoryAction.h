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
    MCNAPI InventoryAction(::InventoryAction const&);

    MCNAPI InventoryAction(
        ::InventorySource                   source,
        uint                                slot,
        ::NetworkItemStackDescriptor const& fromItem,
        ::NetworkItemStackDescriptor const& toItem
    );

    MCNAPI InventoryAction(::InventorySource source, uint slot, ::ItemStack const& fromItem, ::ItemStack const& toItem);

    MCNAPI ::InventoryAction& operator=(::InventoryAction const&);

    MCNAPI void postLoadItems(::BlockPalette& blockPalette, bool isClientSide);

    MCNAPI ~InventoryAction();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::InventoryAction const&);

    MCNAPI void* $ctor(
        ::InventorySource                   source,
        uint                                slot,
        ::NetworkItemStackDescriptor const& fromItem,
        ::NetworkItemStackDescriptor const& toItem
    );

    MCNAPI void* $ctor(::InventorySource source, uint slot, ::ItemStack const& fromItem, ::ItemStack const& toItem);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
