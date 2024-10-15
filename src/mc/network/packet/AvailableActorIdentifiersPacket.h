#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/actor/ActorInfo.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/platform/Result.h"

class AvailableActorIdentifiersPacket : public ::Packet {
public:
    std::vector<ActorInfo> mIdentifierList; // this+0x30

    // prevent constructor by default
    AvailableActorIdentifiersPacket& operator=(AvailableActorIdentifiersPacket const&);
    AvailableActorIdentifiersPacket(AvailableActorIdentifiersPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~AvailableActorIdentifiersPacket();

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 5
    virtual class Bedrock::Result<void> read(class ReadOnlyBinaryStream& stream);

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI AvailableActorIdentifiersPacket();

    MCAPI explicit AvailableActorIdentifiersPacket(std::vector<struct ActorInfo> const& identifierList);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$(std::vector<struct ActorInfo> const& identifierList);

    MCAPI void* ctor$();

    MCAPI void dtor$();

    MCAPI class Bedrock::Result<void> _read$(class ReadOnlyBinaryStream& stream);

    MCAPI ::MinecraftPacketIds getId$() const;

    MCAPI std::string getName$() const;

    MCAPI class Bedrock::Result<void> read$(class ReadOnlyBinaryStream& stream);

    MCAPI void write$(class BinaryStream& stream) const;

    // NOLINTEND
};
