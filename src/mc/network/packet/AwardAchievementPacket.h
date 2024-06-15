#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class AwardAchievementPacket : public ::Packet {
public:
    // prevent constructor by default
    AwardAchievementPacket& operator=(AwardAchievementPacket const&);
    AwardAchievementPacket(AwardAchievementPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1AwardAchievementPacket@@UEAA@XZ
    virtual ~AwardAchievementPacket();

    // vIndex: 1, symbol: ?getId@AwardAchievementPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@AwardAchievementPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 4, symbol: ?write@AwardAchievementPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream&) const;

    // vIndex: 8, symbol:
    // ?_read@AwardAchievementPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream&);

    // symbol: ??0AwardAchievementPacket@@QEAA@XZ
    MCAPI AwardAchievementPacket();

    // symbol: ??0AwardAchievementPacket@@QEAA@H@Z
    MCAPI explicit AwardAchievementPacket(int);

    // NOLINTEND
};
