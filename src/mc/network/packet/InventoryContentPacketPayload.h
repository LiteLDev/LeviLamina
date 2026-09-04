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

struct InventoryContentPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::ContainerID>                                mInventoryId;
    ::ll::TypedStorage<4, 12, ::FullContainerName>                         mFullContainerName;
    ::ll::TypedStorage<8, 96, ::NetworkItemStackDescriptor>                mStorageItem;
    ::ll::TypedStorage<8, 24, ::std::vector<::NetworkItemStackDescriptor>> mSlots;
    // NOLINTEND

public:
    // prevent constructor by default
    InventoryContentPacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI InventoryContentPacketPayload(
        ::ContainerID                     id,
        ::std::vector<::ItemStack> const& items,
        ::FullContainerName const&        fullContainerName,
        ::ItemStack const&                storageItem
    );

    MCAPI ~InventoryContentPacketPayload();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::ContainerID                     id,
        ::std::vector<::ItemStack> const& items,
        ::FullContainerName const&        fullContainerName,
        ::ItemStack const&                storageItem
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
