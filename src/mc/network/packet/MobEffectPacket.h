#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/common/ActorRuntimeID.h"
#include "mc/world/level/Tick.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/platform/Result.h"

class MobEffectPacket : public ::Packet {
public:
    // MobEffectPacket inner types define
    enum class Event : schar {
        Invalid = 0x0,
        Add     = 0x1,
        Update  = 0x2,
        Remove  = 0x3,
    };

public:
    ActorRuntimeID   mRuntimeId;           // this+0x30
    int              mEffectDurationTicks; // this+0x38
    enum class Event mEventId;             // this+0x3C
    int              mEffectId;            // this+0x40
    int              mEffectAmplifier;     // this+0x44
    bool             mShowParticles;       // this+0x48
    Tick             mTick;                // this+0x50

    // prevent constructor by default
    MobEffectPacket& operator=(MobEffectPacket const&);
    MobEffectPacket(MobEffectPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MobEffectPacket() = default;

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI MobEffectPacket();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$();

    MCAPI class Bedrock::Result<void> _read$(class ReadOnlyBinaryStream& stream);

    MCAPI ::MinecraftPacketIds getId$() const;

    MCAPI std::string getName$() const;

    MCAPI void write$(class BinaryStream& stream) const;

    // NOLINTEND
};
