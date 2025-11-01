#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/ActorRuntimeID.h"
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/InventoryPacket.h"
#include "mc/platform/Result.h"
#include "mc/world/ContainerID.h"
#include "mc/world/item/NetworkItemStackDescriptor.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class BlockPalette;
class ItemStack;
class ReadOnlyBinaryStream;
class ServerPlayer;
struct ActorRotationComponent;
struct MoveInputComponent;
// clang-format on

class MobEquipmentPacket : public ::InventoryPacket {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ActorRuntimeID> mRuntimeId;
    ::ll::TypedStorage<8, 96, ::NetworkItemStackDescriptor> mItem;
    ::ll::TypedStorage<4, 4, int> mSlot;
    ::ll::TypedStorage<4, 4, int> mSelectedSlot;
    ::ll::TypedStorage<1, 1, ::ContainerID> mContainerId;
    ::ll::TypedStorage<1, 1, uchar> mSlotByte;
    ::ll::TypedStorage<1, 1, uchar> mSelectedSlotByte;
    ::ll::TypedStorage<1, 1, uchar> mContainerIdByte;
    // NOLINTEND

public:
    // prevent constructor by default
    MobEquipmentPacket& operator=(MobEquipmentPacket const&);
    MobEquipmentPacket(MobEquipmentPacket const&);
    MobEquipmentPacket();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const /*override*/;

    // vIndex: 2
    virtual ::std::string getName() const /*override*/;

    // vIndex: 17
    virtual void handle(::ServerPlayer& player, ::BlockPalette&, ::MoveInputComponent const&, ::ActorRotationComponent&, bool) const /*override*/;

    // vIndex: 6
    virtual void write(::BinaryStream& stream) const /*override*/;

    // vIndex: 15
    virtual ::Bedrock::Result<void> _read(::ReadOnlyBinaryStream& stream) /*override*/;

    // vIndex: 0
    virtual ~MobEquipmentPacket() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI MobEquipmentPacket(::MobEquipmentPacket&&);

    MCAPI MobEquipmentPacket(::ActorRuntimeID runtimeId, ::NetworkItemStackDescriptor const& item, int slot, int selectedSlot, ::ContainerID containerId);

    MCAPI MobEquipmentPacket(::ActorRuntimeID runtimeId, ::ItemStack const& item, int slot, int selectedSlot, ::ContainerID containerId);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::MobEquipmentPacket&&);

    MCAPI void* $ctor(::ActorRuntimeID runtimeId, ::NetworkItemStackDescriptor const& item, int slot, int selectedSlot, ::ContainerID containerId);

    MCAPI void* $ctor(::ActorRuntimeID runtimeId, ::ItemStack const& item, int slot, int selectedSlot, ::ContainerID containerId);
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

    MCAPI void $handle(::ServerPlayer& player, ::BlockPalette&, ::MoveInputComponent const&, ::ActorRotationComponent&, bool) const;

    MCAPI void $write(::BinaryStream& stream) const;

    MCAPI ::Bedrock::Result<void> $_read(::ReadOnlyBinaryStream& stream);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};
