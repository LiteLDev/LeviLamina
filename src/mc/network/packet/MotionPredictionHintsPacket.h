#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/common/ActorRuntimeID.h"
#include "mc/deps/core/math/Vec3.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/platform/Result.h"

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

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$();

    MCAPI void* ctor$(class Actor const& entity);

    MCAPI void dtor$();

    MCAPI class Bedrock::Result<void> _read$(class ReadOnlyBinaryStream& stream);

    MCAPI ::MinecraftPacketIds getId$() const;

    MCAPI std::string getName$() const;

    MCAPI void write$(class BinaryStream& stream) const;

    // NOLINTEND
};
