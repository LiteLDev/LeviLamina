#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/common/ActorRuntimeID.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/network/packet/types/world/actor/ActorEvent.h"
#include "mc/platform/Result.h"

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

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$(class ActorRuntimeID runtimeId, ::ActorEvent eventId, int data);

    MCAPI void* ctor$();

    MCAPI void dtor$();

    MCAPI class Bedrock::Result<void> _read$(class ReadOnlyBinaryStream& stream);

    MCAPI ::MinecraftPacketIds getId$() const;

    MCAPI std::string getName$() const;

    MCAPI void write$(class BinaryStream& stream) const;

    // NOLINTEND
};
