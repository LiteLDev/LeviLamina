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
