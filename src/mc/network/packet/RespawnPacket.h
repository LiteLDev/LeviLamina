#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/math/Vec3.h"
#include "mc/world/ActorRuntimeID.h"
#include "mc/world/actor/player/PlayerRespawnState.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/world/actor/player/PlayerRespawnState.h"

class RespawnPacket : public ::Packet {
public:
    Vec3               mPos;       // this+0x30
    PlayerRespawnState mState;     // this+0x3C
    ActorRuntimeID     mRuntimeId; // this+0x40

    // prevent constructor by default
    RespawnPacket& operator=(RespawnPacket const&);
    RespawnPacket(RespawnPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~RespawnPacket();

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI RespawnPacket();

    MCAPI RespawnPacket(class Vec3 const& pos, ::PlayerRespawnState const& state);

    // NOLINTEND
};
