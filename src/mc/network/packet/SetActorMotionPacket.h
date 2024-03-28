#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/math/Vec3.h"
#include "mc/world/ActorRuntimeID.h"
#include "mc/world/level/Tick.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class SetActorMotionPacket : public ::Packet {
public:
    ActorRuntimeID mRuntimeId; // this+0x30
    Vec3           mMotion;    // this+0x38
    Tick           mTick;      // this+0x48

    // prevent constructor by default
    SetActorMotionPacket& operator=(SetActorMotionPacket const&);
    SetActorMotionPacket(SetActorMotionPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1SetActorMotionPacket@@UEAA@XZ
    virtual ~SetActorMotionPacket();

    // vIndex: 1, symbol: ?getId@SetActorMotionPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@SetActorMotionPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 4, symbol: ?write@SetActorMotionPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8, symbol:
    // ?_read@SetActorMotionPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    // symbol: ??0SetActorMotionPacket@@QEAA@XZ
    MCAPI SetActorMotionPacket();

    // symbol: ??0SetActorMotionPacket@@QEAA@AEBVActor@@@Z
    MCAPI explicit SetActorMotionPacket(class Actor const& entity);

    // NOLINTEND
};
