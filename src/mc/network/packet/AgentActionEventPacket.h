#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/json/Value.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/AgentActionType.h"
#include "mc/network/packet/Packet.h"
#include "mc/platform/Result.h"

class AgentActionEventPacket : public ::Packet {
public:
    AgentActionType mAction;    // this+0x2c
    std::string     mRequestId; // this+0x30
    Json::Value     mResponse;  // this+0x50

    // prevent constructor by default
    AgentActionEventPacket& operator=(AgentActionEventPacket const&);
    AgentActionEventPacket(AgentActionEventPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~AgentActionEventPacket();

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI AgentActionEventPacket();

    MCAPI
    AgentActionEventPacket(std::string const& requestId, ::AgentActionType action, class Json::Value const& response);

    // NOLINTEND
};
