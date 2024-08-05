#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/resources/PacketViolationSeverity.h"
#include "mc/resources/PacketViolationType.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/resources/PacketViolationResponse.h"

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

    MCAPI
    PacketViolationWarningPacket(std::error_code const&, ::PacketViolationResponse, ::MinecraftPacketIds, std::string const&);

    // NOLINTEND
};
