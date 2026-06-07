#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/ActorRuntimeID.h"
#include "mc/world/ContainerID.h"
#include "mc/world/item/NetworkItemStackDescriptor.h"

// auto generated forward declare list
// clang-format off
class ItemStack;
// clang-format on

struct MobEquipmentPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ActorRuntimeID>              mRuntimeId;
    ::ll::TypedStorage<8, 96, ::NetworkItemStackDescriptor> mItem;
    ::ll::TypedStorage<4, 4, int>                           mSlot;
    ::ll::TypedStorage<4, 4, int>                           mSelectedSlot;
    ::ll::TypedStorage<1, 1, ::ContainerID>                 mContainerId;
    // NOLINTEND

public:
    // prevent constructor by default
    MobEquipmentPacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI MobEquipmentPacketPayload(
        ::ActorRuntimeID   runtimeId,
        ::ItemStack const& item,
        int                slot,
        int                selectedSlot,
        ::ContainerID      containerId
    );

    MCAPI MobEquipmentPacketPayload(
        ::ActorRuntimeID                    runtimeId,
        ::NetworkItemStackDescriptor const& item,
        int                                 slot,
        int                                 selectedSlot,
        ::ContainerID                       containerId
    );

    MCAPI ~MobEquipmentPacketPayload();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void*
    $ctor(::ActorRuntimeID runtimeId, ::ItemStack const& item, int slot, int selectedSlot, ::ContainerID containerId);

    MCAPI void* $ctor(
        ::ActorRuntimeID                    runtimeId,
        ::NetworkItemStackDescriptor const& item,
        int                                 slot,
        int                                 selectedSlot,
        ::ContainerID                       containerId
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
