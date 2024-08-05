#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class AnimatePacket : public ::Packet {
public:
    // AnimatePacket inner types define
    enum class Action {};

public:
    // prevent constructor by default
    AnimatePacket& operator=(AnimatePacket const&);
    AnimatePacket(AnimatePacket const&);

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
