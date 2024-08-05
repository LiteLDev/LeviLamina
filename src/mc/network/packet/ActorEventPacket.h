#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/ActorRuntimeID.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/events/ActorEvent.h"
#include "mc/network/packet/Packet.h"

class ActorEventPacket : public ::Packet {
public:
    ActorRuntimeID mRuntimeId; // this+0x30
    ActorEvent     mEventId;   // this+0x38
    int            mData;      // this+0x3c

    // prevent constructor by default
    ActorEventPacket& operator=(ActorEventPacket const&);
    ActorEventPacket(ActorEventPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ActorEventPacket();

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI ActorEventPacket();

    MCAPI ActorEventPacket(class ActorRuntimeID runtimeId, ::ActorEvent eventId, int data);

    // NOLINTEND
};
