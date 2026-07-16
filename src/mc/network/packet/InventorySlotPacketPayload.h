#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/ContainerID.h"
#include "mc/world/containers/FullContainerName.h"
#include "mc/world/item/NetworkItemStackDescriptor.h"

// auto generated forward declare list
// clang-format off
class ItemStack;
// clang-format on

struct InventorySlotPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::ContainerID>                                   mInventoryId;
    ::ll::TypedStorage<4, 4, uint>                                            mSlot;
    ::ll::TypedStorage<4, 16, ::std::optional<::FullContainerName>>           mFullContainerName;
    ::ll::TypedStorage<8, 104, ::std::optional<::NetworkItemStackDescriptor>> mStorageItem;
    ::ll::TypedStorage<8, 96, ::NetworkItemStackDescriptor>                   mItem;
    // NOLINTEND

public:
    // prevent constructor by default
    InventorySlotPacketPayload& operator=(InventorySlotPacketPayload const&);
    InventorySlotPacketPayload(InventorySlotPacketPayload const&);
    InventorySlotPacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI InventorySlotPacketPayload(::InventorySlotPacketPayload&&);

    MCAPI InventorySlotPacketPayload(::ContainerID id, int slot, ::ItemStack const& item);

    MCAPI InventorySlotPacketPayload(
        ::ContainerID              id,
        int                        slot,
        ::ItemStack const&         item,
        ::FullContainerName const& fullContainerName,
        ::ItemStack const&         storageItem
    );

    MCAPI ~InventorySlotPacketPayload();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::InventorySlotPacketPayload&&);

    MCAPI void* $ctor(::ContainerID id, int slot, ::ItemStack const& item);

    MCAPI void* $ctor(
        ::ContainerID              id,
        int                        slot,
        ::ItemStack const&         item,
        ::FullContainerName const& fullContainerName,
        ::ItemStack const&         storageItem
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
