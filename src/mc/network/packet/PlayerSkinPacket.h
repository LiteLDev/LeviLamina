#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class PlayerSkinPacket : public ::Packet {
public:
    // prevent constructor by default
    PlayerSkinPacket& operator=(PlayerSkinPacket const&);
    PlayerSkinPacket(PlayerSkinPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~PlayerSkinPacket();

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 5
    virtual class Bedrock::Result<void> read(class ReadOnlyBinaryStream& stream);

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI PlayerSkinPacket();

    // NOLINTEND
};
