#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/enums/BossBarColor.h"
#include "mc/enums/BossBarOverlay.h"
#include "mc/world/ActorUniqueID.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/world/events/BossEventUpdateType.h"

class BossEventPacket : public ::Packet {
public:
    int                   FLAG_DARKEN;     // this+0x30
    int                   FLAG_FOG;        // this+0x34
    ActorUniqueID         mBossID;         // this+0x38
    ActorUniqueID         mPlayerID;       // this+0x40
    ::BossEventUpdateType mEventType;      // this+0x48
    std::string           mName;           // this+0x50
    float                 mHealthPercent;  // this+0x70
    ::BossBarColor        mColor;          // this+0x74
    ::BossBarOverlay      mOverlay;        // this+0x78
    uchar                 mDarkenScreen;   // this+0x7C
    uchar                 mCreateWorldFog; // this+0x7D

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

    // vIndex: 4, symbol: ?write@BossEventPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8, symbol:
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
