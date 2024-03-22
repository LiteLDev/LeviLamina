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
    // vIndex: 0, symbol: ??1RespawnPacket@@UEAA@XZ
    virtual ~RespawnPacket();

    // vIndex: 1, symbol: ?getId@RespawnPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol: ?getName@RespawnPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 4, symbol: ?write@RespawnPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8, symbol: ?_read@RespawnPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    // symbol: ??0RespawnPacket@@QEAA@XZ
    MCAPI RespawnPacket();

    // symbol: ??0RespawnPacket@@QEAA@AEBVVec3@@AEBW4PlayerRespawnState@@@Z
    MCAPI RespawnPacket(class Vec3 const& pos, ::PlayerRespawnState const& state);

    // NOLINTEND
};
