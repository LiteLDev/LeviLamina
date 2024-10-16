#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/item/NetworkItemStackDescriptor.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/platform/Result.h"
#include "mc/world/ContainerID.h"

class InventoryContentPacket : public ::Packet {
public:
    ContainerID                             mInventoryId; // this+0x30
    std::vector<NetworkItemStackDescriptor> mSlots;       // this+0x38

    // prevent constructor by default
    InventoryContentPacket& operator=(InventoryContentPacket const&);
    InventoryContentPacket(InventoryContentPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~InventoryContentPacket();

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI InventoryContentPacket();

    MCAPI InventoryContentPacket(::ContainerID id, std::vector<class ItemStack> const& items);

    MCAPI static class InventoryContentPacket fromPlayerInventoryId(::ContainerID id, class Player& player);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$();

    MCAPI void* ctor$(::ContainerID id, std::vector<class ItemStack> const& items);

    MCAPI void dtor$();

    MCAPI class Bedrock::Result<void> _read$(class ReadOnlyBinaryStream& stream);

    MCAPI ::MinecraftPacketIds getId$() const;

    MCAPI std::string getName$() const;

    MCAPI void write$(class BinaryStream& stream) const;

    // NOLINTEND
};
