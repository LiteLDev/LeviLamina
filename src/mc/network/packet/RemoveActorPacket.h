#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/ActorUniqueID.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class RemoveActorPacket : public ::Packet {
public:
    ActorUniqueID mEntityId; // this+0x30

    // prevent constructor by default
    RemoveActorPacket& operator=(RemoveActorPacket const&);
    RemoveActorPacket(RemoveActorPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~RemoveActorPacket();

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI RemoveActorPacket();

    MCAPI explicit RemoveActorPacket(struct ActorUniqueID entityId);

    // NOLINTEND
};
