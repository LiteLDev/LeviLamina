#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/ActorUniqueID.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class MapCreateLockedCopyPacket : public ::Packet {
public:
    ActorUniqueID mOriginalMapId; // this+0x30
    ActorUniqueID mNewMapId;      // this+0x38

    // prevent constructor by default
    MapCreateLockedCopyPacket& operator=(MapCreateLockedCopyPacket const&);
    MapCreateLockedCopyPacket(MapCreateLockedCopyPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MapCreateLockedCopyPacket();

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI MapCreateLockedCopyPacket();

    MCAPI MapCreateLockedCopyPacket(struct ActorUniqueID originalMapId, struct ActorUniqueID newMapId);

    MCAPI struct ActorUniqueID getNewMapId() const;

    MCAPI struct ActorUniqueID getOriginalMapId() const;

    // NOLINTEND
};
