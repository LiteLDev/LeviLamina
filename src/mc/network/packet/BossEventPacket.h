#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/common/ActorUniqueID.h"
#include "mc/network/packet/types/world/actor/ai/util/BossBarColor.h"
#include "mc/network/packet/types/world/actor/ai/util/BossBarOverlay.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/network/packet/types/world/actor/ai/util/BossEventUpdateType.h"
#include "mc/platform/Result.h"

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
    // vIndex: 0
    virtual ~BossEventPacket();

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI BossEventPacket();

    MCAPI BossEventPacket(::BossEventUpdateType type, class RaidBossComponent& component);

    MCAPI BossEventPacket(::BossEventUpdateType type, struct ActorUniqueID bossID, class BossComponent& component);

    // NOLINTEND
};
