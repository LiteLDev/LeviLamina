#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/platform/Result.h"

class MapCreateLockedCopyPacket : public ::Packet {
public:
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

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(struct ActorUniqueID originalMapId, struct ActorUniqueID newMapId);

    MCAPI void* ctor$();

    MCAPI void dtor$();

    MCAPI class Bedrock::Result<void> _read$(class ReadOnlyBinaryStream& stream);

    MCAPI ::MinecraftPacketIds getId$() const;

    MCAPI std::string getName$() const;

    MCAPI void write$(class BinaryStream& stream) const;

    // NOLINTEND
};
