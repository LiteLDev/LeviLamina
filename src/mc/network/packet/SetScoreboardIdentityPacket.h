#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/enums/ScoreboardIdentityPacketType.h"
#include "mc/network/packet/ScoreboardIdentityPacketInfo.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class SetScoreboardIdentityPacket : public ::Packet {
public:
    ScoreboardIdentityPacketType              mType;         // this+0x30
    std::vector<ScoreboardIdentityPacketInfo> mIdentityInfo; // this+0x38

    // prevent constructor by default
    SetScoreboardIdentityPacket& operator=(SetScoreboardIdentityPacket const&);
    SetScoreboardIdentityPacket(SetScoreboardIdentityPacket const&);
    SetScoreboardIdentityPacket();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SetScoreboardIdentityPacket();

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI static class SetScoreboardIdentityPacket
    change(struct ScoreboardId const& scoreboardId, struct PlayerScoreboardId const& playerId);

    // NOLINTEND
};
