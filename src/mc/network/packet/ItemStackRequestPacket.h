#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/inventory/network/ItemStackRequestBatch.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class ItemStackRequestPacket : public ::Packet {
public:
    std::unique_ptr<ItemStackRequestBatch> mRequestBatch; // this+0x30

    // prevent constructor by default
    ItemStackRequestPacket& operator=(ItemStackRequestPacket const&);
    ItemStackRequestPacket(ItemStackRequestPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ItemStackRequestPacket() = default;

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI ItemStackRequestPacket();

    // NOLINTEND
};
