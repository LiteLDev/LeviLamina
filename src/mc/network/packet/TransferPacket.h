#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class TransferPacket : public ::Packet {
public:
    std::string mServerAddress; // this+0x30
    int         mServerPort;    // this+0x50

    // prevent constructor by default
    TransferPacket& operator=(TransferPacket const&);
    TransferPacket(TransferPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1TransferPacket@@UEAA@XZ
    virtual ~TransferPacket();

    // vIndex: 1, symbol: ?getId@TransferPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@TransferPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 4, symbol: ?write@TransferPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8, symbol:
    // ?_read@TransferPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    // symbol: ??0TransferPacket@@QEAA@XZ
    MCAPI TransferPacket();

    // symbol: ??0TransferPacket@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI TransferPacket(std::string const& serverAddress, int serverPort);

    // NOLINTEND
};
