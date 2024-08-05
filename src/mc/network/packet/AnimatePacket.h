#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/world/ActorRuntimeID.h"

class AnimatePacket : public ::Packet {
public:
    // AnimatePacket inner types define
    enum class Action : int {
        NoAction         = 0x0,
        Swing            = 0x1,
        WakeUp           = 0x3,
        CriticalHit      = 0x4,
        MagicCriticalHit = 0x5,
        RowRight         = 0x80,
        RowLeft          = 0x81,
    };

    ActorRuntimeID        mRuntimeId; // this+0x30
    AnimatePacket::Action mAction;    // this+0x38
    float                 mData;      // this+0x3C

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~AnimatePacket();

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI AnimatePacket();

    MCAPI AnimatePacket(::AnimatePacket::Action action, class Actor& e);

    MCAPI AnimatePacket(::AnimatePacket::Action action, class ActorRuntimeID runtimeId);

    MCAPI AnimatePacket(::AnimatePacket::Action action, class ActorRuntimeID runtimeId, float data);

    // NOLINTEND
};
