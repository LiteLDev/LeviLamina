#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/item/enchanting/ItemEnchantOption.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/platform/Result.h"

class PlayerEnchantOptionsPacket : public ::Packet {
public:
    std::vector<ItemEnchantOption> mOptions; // this+0x30

    // prevent constructor by default
    PlayerEnchantOptionsPacket& operator=(PlayerEnchantOptionsPacket const&);
    PlayerEnchantOptionsPacket(PlayerEnchantOptionsPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~PlayerEnchantOptionsPacket();

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI PlayerEnchantOptionsPacket();

    // NOLINTEND
};
