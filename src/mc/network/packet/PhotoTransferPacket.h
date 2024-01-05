#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class PhotoTransferPacket : public ::Packet {
public:
    // prevent constructor by default
    PhotoTransferPacket& operator=(PhotoTransferPacket const&);
    PhotoTransferPacket(PhotoTransferPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1PhotoTransferPacket@@UEAA@XZ
    virtual ~PhotoTransferPacket();

    // vIndex: 1, symbol: ?getId@PhotoTransferPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@PhotoTransferPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 3, symbol: ?write@PhotoTransferPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 7, symbol:
    // ?_read@PhotoTransferPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    // symbol: ??0PhotoTransferPacket@@QEAA@XZ
    MCAPI PhotoTransferPacket();

    // NOLINTEND
};
