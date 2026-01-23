#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/ContainerID.h"

// auto generated forward declare list
// clang-format off
class InventoryTransactionManager;
class ItemStack;
class Player;
class PlayerInventory;
class SimpleContainer;
// clang-format on

class FullPlayerInventoryWrapper {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::PlayerInventory&>             mPlayerInventory;
    ::ll::TypedStorage<8, 8, ::SimpleContainer&>             mArmorInventory;
    ::ll::TypedStorage<8, 8, ::SimpleContainer&>             mHandInventory;
    ::ll::TypedStorage<8, 8, ::InventoryTransactionManager*> mTransactionManager;
    ::ll::TypedStorage<8, 8, ::Player*>                      mPlayer;
    // NOLINTEND

public:
    // prevent constructor by default
    FullPlayerInventoryWrapper& operator=(FullPlayerInventoryWrapper const&);
    FullPlayerInventoryWrapper(FullPlayerInventoryWrapper const&);
    FullPlayerInventoryWrapper();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI int _clearSimpleContainerItem(::SimpleContainer& container, ::ContainerID containerId, int slot);

    MCAPI int _getSimpleContainerItemCount(
        ::SimpleContainer&                        container,
        int                                       slot,
        ::std::function<bool(::ItemStack const&)> comparator
    );

    MCAPI int _removeCursorItem();

    MCAPI int _removeCursorItem(::ItemStack const& item, bool requireExactAux, int maxCount);

    MCAPI int _removeSimpleContainerItem(
        ::SimpleContainer& container,
        ::ContainerID      containerId,
        int                slot,
        ::ItemStack const& sourceItem,
        bool               requireExactAux,
        int                maxCount
    );

    MCAPI void _sendCursorSlotPacket() const;

    MCAPI int getItemCount(::std::function<bool(::ItemStack const&)> comparator);

    MCAPI int removeResource(
        ::ItemStack const&                        sourceItem,
        ::std::function<bool(::ItemStack const&)> comparator,
        bool                                      requireExactAux,
        int                                       maxCount
    );
    // NOLINTEND
};
