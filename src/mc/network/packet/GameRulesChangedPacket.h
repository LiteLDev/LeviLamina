#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/network/packet/GameRulesChangedPacketData.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class GameRulesChangedPacket : public ::Packet {
public:
    GameRulesChangedPacketData mRuleData; // this+0x30

    // prevent constructor by default
    GameRulesChangedPacket& operator=(GameRulesChangedPacket const&);
    GameRulesChangedPacket(GameRulesChangedPacket const&);
    GameRulesChangedPacket();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~GameRulesChangedPacket() = default;

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    // NOLINTEND
};
