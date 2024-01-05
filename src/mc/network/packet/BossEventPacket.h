#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/world/events/BossEventUpdateType.h"

class BossEventPacket : public ::Packet {
public:
    // prevent constructor by default
    BossEventPacket& operator=(BossEventPacket const&);
    BossEventPacket(BossEventPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1BossEventPacket@@UEAA@XZ
    virtual ~BossEventPacket();

    // vIndex: 1, symbol: ?getId@BossEventPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@BossEventPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 3, symbol: ?write@BossEventPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 7, symbol:
    // ?_read@BossEventPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    // symbol: ??0BossEventPacket@@QEAA@XZ
    MCAPI BossEventPacket();

    // symbol: ??0BossEventPacket@@QEAA@W4BossEventUpdateType@@AEAVRaidBossComponent@@@Z
    MCAPI BossEventPacket(::BossEventUpdateType type, class RaidBossComponent& component);

    // symbol: ??0BossEventPacket@@QEAA@W4BossEventUpdateType@@UActorUniqueID@@AEAVBossComponent@@@Z
    MCAPI BossEventPacket(::BossEventUpdateType type, struct ActorUniqueID bossID, class BossComponent& component);

    // NOLINTEND
};
