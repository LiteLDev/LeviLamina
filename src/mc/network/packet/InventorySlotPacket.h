#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/containers/ContainerID.h"
#include "mc/world/item/NetworkItemStackDescriptor.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/world/containers/ContainerID.h"

class InventorySlotPacket : public ::Packet {
public:
    ContainerID                mInventoryId; // this+0x30
    uint                       mSlot;        // this+0x34
    NetworkItemStackDescriptor mItem;        // this+0x38

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
