#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/enums/ScorePacketType.h"
#include "mc/network/packet/ScorePacketInfo.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/enums/ScorePacketType.h"
#include "mc/network/packet/Packet.h"

class SetScorePacket : public ::Packet {
public:
    ScorePacketType              mType;      // this+0x30
    std::vector<ScorePacketInfo> mScoreInfo; // this+0x38

    // prevent constructor by default
    SetScorePacket& operator=(SetScorePacket const&);
    SetScorePacket(SetScorePacket const&);
    SetScorePacket();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1SetScorePacket@@UEAA@XZ
    virtual ~SetScorePacket();

    // vIndex: 1, symbol: ?getId@SetScorePacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@SetScorePacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 4, symbol: ?write@SetScorePacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8, symbol:
    // ?_read@SetScorePacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    // symbol: ?change@SetScorePacket@@SA?AV1@V?$vector@UScorePacketInfo@@V?$allocator@UScorePacketInfo@@@std@@@std@@@Z
    MCAPI static class SetScorePacket change(std::vector<struct ScorePacketInfo> info);

    // symbol: ?change@SetScorePacket@@SA?AV1@AEBUScoreboardId@@AEBVObjective@@@Z
    MCAPI static class SetScorePacket change(struct ScoreboardId const& id, class Objective const& objective);

    // symbol: ?remove@SetScorePacket@@SA?AV1@AEBUScoreboardId@@AEBVObjective@@@Z
    MCAPI static class SetScorePacket remove(struct ScoreboardId const& id, class Objective const& objective);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ??0SetScorePacket@@AEAA@W4ScorePacketType@@AEBUScoreboardId@@AEBVObjective@@@Z
    MCAPI SetScorePacket(::ScorePacketType type, struct ScoreboardId const& id, class Objective const& objective);

    // NOLINTEND
};
