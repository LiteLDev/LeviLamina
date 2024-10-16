#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/common/ActorRuntimeID.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/platform/Result.h"

class TakeItemActorPacket : public ::Packet {
public:
    ActorRuntimeID mItemId;  // this+0x30
    ActorRuntimeID mActorId; // this+0x38

    // prevent constructor by default
    TakeItemActorPacket& operator=(TakeItemActorPacket const&);
    TakeItemActorPacket(TakeItemActorPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~TakeItemActorPacket();

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI TakeItemActorPacket();

    MCAPI TakeItemActorPacket(class ActorRuntimeID itemId, class ActorRuntimeID actorId);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$();

    MCAPI void* ctor$(class ActorRuntimeID itemId, class ActorRuntimeID actorId);

    MCAPI void dtor$();

    MCAPI class Bedrock::Result<void> _read$(class ReadOnlyBinaryStream& stream);

    MCAPI ::MinecraftPacketIds getId$() const;

    MCAPI std::string getName$() const;

    MCAPI void write$(class BinaryStream& stream) const;

    // NOLINTEND
};
