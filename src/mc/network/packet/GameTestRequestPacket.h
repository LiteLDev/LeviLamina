#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/gametest/framework/TestParameters.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class GameTestRequestPacket : public ::Packet {
public:
    std::string              mTestName; // this+0x30
    gametest::TestParameters mParams;   // this+0x50

    // prevent constructor by default
    GameTestRequestPacket& operator=(GameTestRequestPacket const&);
    GameTestRequestPacket(GameTestRequestPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~GameTestRequestPacket() = default;

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI GameTestRequestPacket();

    // NOLINTEND
};
