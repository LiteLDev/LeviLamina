#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/platform/Result.h"
#include "mc/world/ContainerID.h"

// auto generated forward declare list
// clang-format off
class ActorRuntimeID;
class BinaryStream;
class ItemStack;
class NetworkItemStackDescriptor;
class ReadOnlyBinaryStream;
// clang-format on

class MobEquipmentPacket : public ::Packet {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ActorRuntimeID>              mRuntimeId;
    ::ll::TypedStorage<8, 96, ::NetworkItemStackDescriptor> mItem;
    ::ll::TypedStorage<4, 4, int>                           mSlot;
    ::ll::TypedStorage<4, 4, int>                           mSelectedSlot;
    ::ll::TypedStorage<1, 1, ::ContainerID>                 mContainerId;
    ::ll::TypedStorage<1, 1, uchar>                         mSlotByte;
    ::ll::TypedStorage<1, 1, uchar>                         mSelectedSlotByte;
    ::ll::TypedStorage<1, 1, uchar>                         mContainerIdByte;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const /*override*/;

    // vIndex: 2
    virtual ::std::string getName() const /*override*/;

    // vIndex: 4
    virtual void write(::BinaryStream& stream) const /*override*/;

    // vIndex: 8
    virtual ::Bedrock::Result<void> _read(::ReadOnlyBinaryStream& stream) /*override*/;

    // vIndex: 0
    virtual ~MobEquipmentPacket() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI MobEquipmentPacket();

    MCAPI MobEquipmentPacket(::MobEquipmentPacket&&);

    MCAPI MobEquipmentPacket(
        ::ActorRuntimeID                    runtimeId,
        ::NetworkItemStackDescriptor const& item,
        int                                 slot,
        int                                 selectedSlot,
        ::ContainerID                       containerId
    );

    MCAPI MobEquipmentPacket(
        ::ActorRuntimeID   runtimeId,
        ::ItemStack const& item,
        int                slot,
        int                selectedSlot,
        ::ContainerID      containerId
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::MobEquipmentPacket&&);

    MCAPI void* $ctor(
        ::ActorRuntimeID                    runtimeId,
        ::NetworkItemStackDescriptor const& item,
        int                                 slot,
        int                                 selectedSlot,
        ::ContainerID                       containerId
    );

    MCAPI void*
    $ctor(::ActorRuntimeID runtimeId, ::ItemStack const& item, int slot, int selectedSlot, ::ContainerID containerId);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::MinecraftPacketIds $getId() const;

    MCAPI ::std::string $getName() const;

    MCAPI void $write(::BinaryStream& stream) const;

    MCAPI ::Bedrock::Result<void> $_read(::ReadOnlyBinaryStream& stream);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
