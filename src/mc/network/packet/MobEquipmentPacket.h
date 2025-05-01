#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/ActorRuntimeID.h"
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/platform/Result.h"
#include "mc/world/ContainerID.h"
#include "mc/world/item/NetworkItemStackDescriptor.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class ItemStack;
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
    // prevent constructor by default
    MobEquipmentPacket& operator=(MobEquipmentPacket const&);
    MobEquipmentPacket(MobEquipmentPacket const&);

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
    MCNAPI MobEquipmentPacket(::MobEquipmentPacket&&);

    MCNAPI MobEquipmentPacket(
        ::ActorRuntimeID                    runtimeId,
        ::NetworkItemStackDescriptor const& item,
        int                                 slot,
        int                                 selectedSlot,
        ::ContainerID                       containerId
    );

    MCNAPI MobEquipmentPacket(
        ::ActorRuntimeID   runtimeId,
        ::ItemStack const& item,
        int                slot,
        int                selectedSlot,
        ::ContainerID      containerId
    );

    MCNAPI void _convertFromBytes();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::MobEquipmentPacket&&);

    MCNAPI void* $ctor(
        ::ActorRuntimeID                    runtimeId,
        ::NetworkItemStackDescriptor const& item,
        int                                 slot,
        int                                 selectedSlot,
        ::ContainerID                       containerId
    );

    MCNAPI void*
    $ctor(::ActorRuntimeID runtimeId, ::ItemStack const& item, int slot, int selectedSlot, ::ContainerID containerId);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::MinecraftPacketIds $getId() const;

    MCNAPI ::std::string $getName() const;

    MCNAPI void $write(::BinaryStream& stream) const;

    MCNAPI ::Bedrock::Result<void> $_read(::ReadOnlyBinaryStream& stream);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
