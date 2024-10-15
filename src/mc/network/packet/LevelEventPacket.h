#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/platform/Result.h"
#include "mc/world/level/block/LevelEvent.h"

class LevelEventPacket : public ::Packet {
public:
    // prevent constructor by default
    LevelEventPacket& operator=(LevelEventPacket const&);
    LevelEventPacket(LevelEventPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LevelEventPacket();

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI LevelEventPacket();

    MCAPI LevelEventPacket(::LevelEvent eventId, class Vec3 const& pos, int data);

    MCAPI LevelEventPacket(::LevelEvent eventId, float x, float y, float z, int data);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$(::LevelEvent eventId, float x, float y, float z, int data);

    MCAPI void* ctor$();

    MCAPI void* ctor$(::LevelEvent eventId, class Vec3 const& pos, int data);

    MCAPI void dtor$();

    MCAPI class Bedrock::Result<void> _read$(class ReadOnlyBinaryStream& stream);

    MCAPI ::MinecraftPacketIds getId$() const;

    MCAPI std::string getName$() const;

    MCAPI void write$(class BinaryStream& stream) const;

    // NOLINTEND
};
