#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/platform/Result.h"
#include "mc/world/ContainerID.h"

class InventorySlotPacket : public ::Packet {
public:
    // prevent constructor by default
    InventorySlotPacket& operator=(InventorySlotPacket const&);
    InventorySlotPacket(InventorySlotPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~InventorySlotPacket();

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI InventorySlotPacket();

    MCAPI InventorySlotPacket(::ContainerID id, uint slot, class ItemStack const& item);

    // NOLINTEND
};
