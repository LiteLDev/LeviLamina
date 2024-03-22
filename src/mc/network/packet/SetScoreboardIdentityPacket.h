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
    // vIndex: 0, symbol: ??1SetScoreboardIdentityPacket@@UEAA@XZ
    virtual ~SetScoreboardIdentityPacket();

    // vIndex: 1, symbol: ?getId@SetScoreboardIdentityPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@SetScoreboardIdentityPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 4, symbol: ?write@SetScoreboardIdentityPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8, symbol:
    // ?_read@SetScoreboardIdentityPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    // symbol: ?change@SetScoreboardIdentityPacket@@SA?AV1@AEBUScoreboardId@@AEBUPlayerScoreboardId@@@Z
    MCAPI static class SetScoreboardIdentityPacket
    change(struct ScoreboardId const& scoreboardId, struct PlayerScoreboardId const& playerId);

    // NOLINTEND
};
