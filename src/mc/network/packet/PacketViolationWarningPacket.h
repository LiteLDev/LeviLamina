#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/network/packet/PacketViolationSeverity.h"
#include "mc/network/packet/PacketViolationType.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/PacketViolationResponse.h"
#include "mc/network/packet/Packet.h"
#include "mc/platform/Result.h"

class PacketViolationWarningPacket : public ::Packet {
public:
    PacketViolationType     mViolationType;     // this+0x30
    PacketViolationSeverity mViolationSeverity; // this+0x34
    MinecraftPacketIds      mViolatingPacketId; // this+0x38
    std::string             mViolationContext;  // this+0x40

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
};
