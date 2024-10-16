#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/PacketViolationResponse.h"
#include "mc/network/packet/Packet.h"
#include "mc/platform/Result.h"

class PacketViolationWarningPacket : public ::Packet {
public:
    // prevent constructor by default
    PacketViolationWarningPacket& operator=(PacketViolationWarningPacket const&);
    PacketViolationWarningPacket(PacketViolationWarningPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~PacketViolationWarningPacket();

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI PacketViolationWarningPacket();

    MCAPI PacketViolationWarningPacket(
        std::error_code const&    error_code,
        ::PacketViolationResponse violationResponse,
        ::MinecraftPacketIds      violatingPacketId,
        std::string const&        violationContext
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$();

    MCAPI void* ctor$(
        std::error_code const&    error_code,
        ::PacketViolationResponse violationResponse,
        ::MinecraftPacketIds      violatingPacketId,
        std::string const&        violationContext
    );

    MCAPI void dtor$();

    MCAPI class Bedrock::Result<void> _read$(class ReadOnlyBinaryStream& stream);

    MCAPI ::MinecraftPacketIds getId$() const;

    MCAPI std::string getName$() const;

    MCAPI void write$(class BinaryStream& stream) const;

    // NOLINTEND
};
