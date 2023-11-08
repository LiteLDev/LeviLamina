#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class ClientToServerHandshakePacket : public ::Packet {
public:
    // prevent constructor by default
    ClientToServerHandshakePacket& operator=(ClientToServerHandshakePacket const&);
    ClientToServerHandshakePacket(ClientToServerHandshakePacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ClientToServerHandshakePacket@@UEAA@XZ
    virtual ~ClientToServerHandshakePacket() = default;

    // vIndex: 1, symbol: ?getId@ClientToServerHandshakePacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@ClientToServerHandshakePacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 3, symbol: ?write@ClientToServerHandshakePacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream&) const;

    // vIndex: 7, symbol:
    // ?_read@ClientToServerHandshakePacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream&);

    // symbol: ??0ClientToServerHandshakePacket@@QEAA@XZ
    MCAPI ClientToServerHandshakePacket();

    // NOLINTEND
};
