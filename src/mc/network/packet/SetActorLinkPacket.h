#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/network/packet/types/world/actor/ActorLink.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/platform/Result.h"

class SetActorLinkPacket : public ::Packet {
public:
    ActorLink mLink; // this+0x30

    // prevent constructor by default
    SetActorLinkPacket& operator=(SetActorLinkPacket const&);
    SetActorLinkPacket(SetActorLinkPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SetActorLinkPacket();

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI SetActorLinkPacket();

    MCAPI explicit SetActorLinkPacket(struct ActorLink const& link);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(struct ActorLink const& link);

    MCAPI void* ctor$();

    MCAPI void dtor$();

    MCAPI class Bedrock::Result<void> _read$(class ReadOnlyBinaryStream& stream);

    MCAPI ::MinecraftPacketIds getId$() const;

    MCAPI std::string getName$() const;

    MCAPI void write$(class BinaryStream& stream) const;

    // NOLINTEND
};
