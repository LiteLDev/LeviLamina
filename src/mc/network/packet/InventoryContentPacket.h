#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/rendergraph/Packet.h"
#include "mc/network/MinecraftPacketIds.h"
#include "mc/platform/Result.h"
#include "mc/world/ContainerID.h"
#include "mc/world/containers/FullContainerName.h"
#include "mc/world/item/NetworkItemStackDescriptor.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class ItemStack;
class Player;
class ReadOnlyBinaryStream;
// clang-format on

class InventoryContentPacket : public ::Packet {
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
    InventoryContentPacket();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const /*override*/;

    // vIndex: 2
    virtual ::std::string getName() const /*override*/;

    // vIndex: 5
    virtual void write(::BinaryStream& stream) const /*override*/;

    // vIndex: 13
    virtual ::Bedrock::Result<void> _read(::ReadOnlyBinaryStream& stream) /*override*/;

    // vIndex: 0
    virtual ~InventoryContentPacket() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI InventoryContentPacket(
        ::ContainerID                     id,
        ::std::vector<::ItemStack> const& items,
        ::FullContainerName const&        fullContainerName,
        ::ItemStack const&                storageItem
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::InventoryContentPacket fromPlayerInventoryId(::ContainerID id, ::Player& player);
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
    MCNAPI static void** $vftable();
    // NOLINTEND
};
