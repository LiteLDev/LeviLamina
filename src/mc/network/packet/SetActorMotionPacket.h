#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/common/ActorRuntimeID.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/world/level/Tick.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/platform/Result.h"

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
    // vIndex: 0
    virtual ~SetActorMotionPacket();

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI SetActorMotionPacket();

    MCAPI explicit SetActorMotionPacket(class Actor const& entity);

    // NOLINTEND
};
