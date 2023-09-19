#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class DisconnectPacket : public ::Packet {
public:
    bool        mSkipMessage; // this+0x30
    std::string mMessage;     // this+0x38

    // prevent constructor by default
    DisconnectPacket& operator=(DisconnectPacket const&);
    DisconnectPacket(DisconnectPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?getId@DisconnectPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@DisconnectPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 3, symbol: ?write@DisconnectPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream&) const;

    // vIndex: 7, symbol:
    // ?_read@DisconnectPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void, std::error_code> _read(class ReadOnlyBinaryStream&);

    // symbol: ??1DisconnectPacket@@UEAA@XZ
    MCVAPI ~DisconnectPacket();

    // symbol: ??0DisconnectPacket@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
    MCAPI DisconnectPacket(std::string const&, bool);

    // symbol: ??0DisconnectPacket@@QEAA@XZ
    MCAPI DisconnectPacket();

    // NOLINTEND
};
