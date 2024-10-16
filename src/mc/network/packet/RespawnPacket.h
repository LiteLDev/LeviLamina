#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/network/packet/PlayerRespawnState.h"
#include "mc/platform/Result.h"

class RespawnPacket : public ::Packet {
public:
    // prevent constructor by default
    RespawnPacket& operator=(RespawnPacket const&);
    RespawnPacket(RespawnPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~RespawnPacket();

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI RespawnPacket();

    MCAPI RespawnPacket(class Vec3 const& pos, ::PlayerRespawnState const& state);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$();

    MCAPI void* ctor$(class Vec3 const& pos, ::PlayerRespawnState const& state);

    MCAPI void dtor$();

    MCAPI class Bedrock::Result<void> _read$(class ReadOnlyBinaryStream& stream);

    MCAPI ::MinecraftPacketIds getId$() const;

    MCAPI std::string getName$() const;

    MCAPI void write$(class BinaryStream& stream) const;

    // NOLINTEND
};
