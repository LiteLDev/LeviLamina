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
    // vIndex: 0, symbol: ??1PacketViolationWarningPacket@@UEAA@XZ
    virtual ~PacketViolationWarningPacket();

    // vIndex: 1, symbol: ?getId@PacketViolationWarningPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@PacketViolationWarningPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 4, symbol: ?write@PacketViolationWarningPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8, symbol:
    // ?_read@PacketViolationWarningPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    // symbol: ??0PacketViolationWarningPacket@@QEAA@XZ
    MCAPI PacketViolationWarningPacket();

    // symbol:
    // ??0PacketViolationWarningPacket@@QEAA@AEBVerror_code@std@@W4PacketViolationResponse@@W4MinecraftPacketIds@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@@Z
    MCAPI
    PacketViolationWarningPacket(std::error_code const&, ::PacketViolationResponse, ::MinecraftPacketIds, std::string const&);

    // NOLINTEND
};
