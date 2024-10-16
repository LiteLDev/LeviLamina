#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/network/NetworkBlockPosition.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/platform/Result.h"

class OpenSignPacket : public ::Packet {
public:
    NetworkBlockPosition mPos;
    bool                 mIsFrontSide;

    // prevent constructor by default
    OpenSignPacket& operator=(OpenSignPacket const&);
    OpenSignPacket(OpenSignPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~OpenSignPacket();

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI OpenSignPacket();

    MCAPI OpenSignPacket(class BlockPos const& pos, bool isFrontSide);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$();

    MCAPI void* ctor$(class BlockPos const& pos, bool isFrontSide);

    MCAPI void dtor$();

    MCAPI class Bedrock::Result<void> _read$(class ReadOnlyBinaryStream& stream);

    MCAPI ::MinecraftPacketIds getId$() const;

    MCAPI std::string getName$() const;

    MCAPI void write$(class BinaryStream& stream) const;

    // NOLINTEND
};
