#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/AgentAnimation.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class AgentAnimationPacket : public ::Packet {
public:
    AgentAnimation mAnimation;
    ActorRuntimeID mEntityRuntimeID;

    // prevent constructor by default
    AgentAnimationPacket& operator=(AgentAnimationPacket const&);
    AgentAnimationPacket(AgentAnimationPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~AgentAnimationPacket();

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream&) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream&);

    MCAPI AgentAnimationPacket();

    MCAPI AgentAnimationPacket(::AgentAnimation, class ActorRuntimeID);

    // NOLINTEND
};
