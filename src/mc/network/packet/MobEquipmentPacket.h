#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/InventoryPacket.h"
#include "mc/platform/Result.h"
#include "mc/world/ContainerID.h"

// auto generated forward declare list
// clang-format off
class ActorRuntimeID;
class BinaryStream;
class BlockPalette;
class ItemStack;
class NetworkItemStackDescriptor;
class ReadOnlyBinaryStream;
class ServerPlayer;
struct ActorRotationComponent;
struct MoveInputComponent;
// clang-format on

class MobEquipmentPacket : public ::InventoryPacket {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk96ab1f;
    ::ll::UntypedStorage<8, 96> mUnk9ef7d1;
    ::ll::UntypedStorage<4, 4>  mUnk9fc086;
    ::ll::UntypedStorage<4, 4>  mUnk5c3c96;
    ::ll::UntypedStorage<1, 1>  mUnk4cf603;
    ::ll::UntypedStorage<1, 1>  mUnk48662b;
    ::ll::UntypedStorage<1, 1>  mUnk1f529a;
    ::ll::UntypedStorage<1, 1>  mUnke5dbd5;
    // NOLINTEND

public:
    // prevent constructor by default
    MobEquipmentPacket& operator=(MobEquipmentPacket const&);
    MobEquipmentPacket(MobEquipmentPacket const&);
    MobEquipmentPacket();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::MinecraftPacketIds getId() const /*override*/;

    virtual ::std::string getName() const /*override*/;

    virtual void
    handle(::ServerPlayer& player, ::BlockPalette&, ::MoveInputComponent const&, ::ActorRotationComponent&, bool) const
        /*override*/;

    virtual void write(::BinaryStream& stream) const /*override*/;

    virtual ::Bedrock::Result<void> _read(::ReadOnlyBinaryStream& stream) /*override*/;

    virtual ~MobEquipmentPacket() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI MobEquipmentPacket(::MobEquipmentPacket&&);

    MCAPI MobEquipmentPacket(
        ::ActorRuntimeID   runtimeId,
        ::ItemStack const& item,
        int                slot,
        int                selectedSlot,
        ::ContainerID      containerId
    );

    MCAPI MobEquipmentPacket(
        ::ActorRuntimeID                    runtimeId,
        ::NetworkItemStackDescriptor const& item,
        int                                 slot,
        int                                 selectedSlot,
        ::ContainerID                       containerId
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::MobEquipmentPacket&&);

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

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::MinecraftPacketIds $getId() const;

    MCAPI ::std::string $getName() const;

    MCAPI void $handle(
        ::ServerPlayer& player,
        ::BlockPalette&,
        ::MoveInputComponent const&,
        ::ActorRotationComponent&,
        bool
    ) const;

    MCAPI void $write(::BinaryStream& stream) const;

    MCAPI ::Bedrock::Result<void> $_read(::ReadOnlyBinaryStream& stream);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
