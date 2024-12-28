#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/ContainerID.h"

// auto generated forward declare list
// clang-format off
class ItemStack;
class Player;
class SimpleContainer;
// clang-format on

class FullPlayerInventoryWrapper {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk62d28c;
    ::ll::UntypedStorage<8, 8> mUnk9d1952;
    ::ll::UntypedStorage<8, 8> mUnkc14899;
    ::ll::UntypedStorage<8, 8> mUnkef44d3;
    ::ll::UntypedStorage<8, 8> mUnk6b016b;
    // NOLINTEND

public:
    // prevent constructor by default
    FullPlayerInventoryWrapper& operator=(FullPlayerInventoryWrapper const&);
    FullPlayerInventoryWrapper(FullPlayerInventoryWrapper const&);
    FullPlayerInventoryWrapper();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit FullPlayerInventoryWrapper(::Player& player);

    MCAPI int _clearSimpleContainerItem(::SimpleContainer& container, ::ContainerID containerId, int slot);

    MCAPI int _getSimpleContainerItemCount(
        ::SimpleContainer&                        container,
        int                                       slot,
        ::std::function<bool(::ItemStack const&)> comparator
    );

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

    MCAPI int clearAllItems();

    MCAPI int getItemCount(::std::function<bool(::ItemStack const&)> comparator);

    MCAPI int removeResource(
        ::ItemStack const&                        sourceItem,
        ::std::function<bool(::ItemStack const&)> comparator,
        bool                                      requireExactAux,
        int                                       maxCount
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Player& player);
    // NOLINTEND
};
