#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/enums/ScorePacketType.h"
#include "mc/network/packet/Packet.h"

class SetScorePacket : public ::Packet {
public:
    // prevent constructor by default
    SetScorePacket& operator=(SetScorePacket const&) = delete;
    SetScorePacket(SetScorePacket const&)            = delete;
    SetScorePacket()                                 = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?getId@SetScorePacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@SetScorePacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 3, symbol: ?write@SetScorePacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream&) const;

    // vIndex: 7, symbol:
    // ?_read@SetScorePacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void, std::error_code> _read(class ReadOnlyBinaryStream&);

    // symbol: ??1SetScorePacket@@UEAA@XZ
    MCVAPI ~SetScorePacket();

    // symbol: ?change@SetScorePacket@@SA?AV1@AEBUScoreboardId@@AEBVObjective@@@Z
    MCAPI static class SetScorePacket change(struct ScoreboardId const&, class Objective const&);

    // symbol: ?change@SetScorePacket@@SA?AV1@V?$vector@UScorePacketInfo@@V?$allocator@UScorePacketInfo@@@std@@@std@@@Z
    MCAPI static class SetScorePacket change(std::vector<struct ScorePacketInfo>);

    // symbol: ?remove@SetScorePacket@@SA?AV1@AEBUScoreboardId@@AEBVObjective@@@Z
    MCAPI static class SetScorePacket remove(struct ScoreboardId const&, class Objective const&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ??0SetScorePacket@@AEAA@W4ScorePacketType@@AEBUScoreboardId@@AEBVObjective@@@Z
    MCAPI SetScorePacket(::ScorePacketType, struct ScoreboardId const&, class Objective const&);

    // NOLINTEND
};
