#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/platform/Result.h"
#include "mc/world/ContainerID.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class ItemStack;
class NetworkItemStackDescriptor;
class ReadOnlyBinaryStream;
struct FullContainerName;
// clang-format on

class InventorySlotPacket : public ::Packet {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::ContainerID>                 mInventoryId;
    ::ll::TypedStorage<4, 12, ::FullContainerName>          mFullContainerName;
    ::ll::TypedStorage<8, 96, ::NetworkItemStackDescriptor> mStorageItem;
    ::ll::TypedStorage<4, 4, uint>                          mSlot;
    ::ll::TypedStorage<8, 96, ::NetworkItemStackDescriptor> mItem;
    // NOLINTEND

public:
    // prevent constructor by default
    InventorySlotPacket& operator=(InventorySlotPacket const&);
    InventorySlotPacket(InventorySlotPacket const&);

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
    virtual ~InventorySlotPacket() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI InventorySlotPacket();

    MCAPI InventorySlotPacket(::ContainerID id, uint slot, ::ItemStack const& item);

    MCAPI InventorySlotPacket(
        ::ContainerID              id,
        uint                       slot,
        ::ItemStack const&         item,
        ::FullContainerName const& fullContainerName,
        ::ItemStack const&         storageItem
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::ContainerID id, uint slot, ::ItemStack const& item);

    MCAPI void* $ctor(
        ::ContainerID              id,
        uint                       slot,
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
