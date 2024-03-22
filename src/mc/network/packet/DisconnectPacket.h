#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/enums/connection/DisconnectFailReason.h"
#include "mc/network/packet/Packet.h"

class DisconnectPacket : public ::Packet {
public:
    bool                             mSkipMessage;
    std::string                      mMessage;
    Connection::DisconnectFailReason mReason;

    // prevent constructor by default
    DisconnectPacket& operator=(DisconnectPacket const&);
    DisconnectPacket(DisconnectPacket const&);
    DisconnectPacket();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1DisconnectPacket@@UEAA@XZ
    virtual ~DisconnectPacket();

    // vIndex: 1, symbol: ?getId@DisconnectPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@DisconnectPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 4, symbol: ?write@DisconnectPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8, symbol:
    // ?_read@DisconnectPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    // symbol:
    // ??0DisconnectPacket@@QEAA@W4DisconnectFailReason@Connection@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
    MCAPI DisconnectPacket(::Connection::DisconnectFailReason, std::string const&, bool);

    // NOLINTEND
};
