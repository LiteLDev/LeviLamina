#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/math/Vec3.h"
#include "mc/world/ActorRuntimeID.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class MotionPredictionHintsPacket : public ::Packet {
public:
    ActorRuntimeID mRuntimeId; // this+0x30
    Vec3           mMotion;    // this+0x38
    bool           mOnGround;  // this+0x44

    // prevent constructor by default
    MotionPredictionHintsPacket& operator=(MotionPredictionHintsPacket const&);
    MotionPredictionHintsPacket(MotionPredictionHintsPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MotionPredictionHintsPacket();

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI MotionPredictionHintsPacket();

    MCAPI explicit MotionPredictionHintsPacket(class Actor const& entity);

    // NOLINTEND
};
