#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/network/packet/types/world/actor/ai/util/BossEventUpdateType.h"
#include "mc/platform/Result.h"

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

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(::BossEventUpdateType type, class RaidBossComponent& component);

    MCAPI void* ctor$();

    MCAPI void* ctor$(::BossEventUpdateType type, struct ActorUniqueID bossID, class BossComponent& component);

    MCAPI void dtor$();

    MCAPI class Bedrock::Result<void> _read$(class ReadOnlyBinaryStream& stream);

    MCAPI ::MinecraftPacketIds getId$() const;

    MCAPI std::string getName$() const;

    MCAPI void write$(class BinaryStream& stream) const;

    // NOLINTEND
};
