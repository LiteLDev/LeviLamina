#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/world/containers/ContainerID.h"

class InventoryContentPacket : public ::Packet {
public:
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
};
