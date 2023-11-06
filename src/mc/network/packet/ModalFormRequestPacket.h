#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class ModalFormRequestPacket : public ::Packet {
public:
    // prevent constructor by default
    ModalFormRequestPacket& operator=(ModalFormRequestPacket const&);
    ModalFormRequestPacket(ModalFormRequestPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1ModalFormRequestPacket@@UEAA@XZ
    virtual ~ModalFormRequestPacket();

    // vIndex: 1, symbol: ?getId@ModalFormRequestPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@ModalFormRequestPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 3, symbol: ?write@ModalFormRequestPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream&) const;

    // vIndex: 7, symbol:
    // ?_read@ModalFormRequestPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream&);

    // symbol: ??0ModalFormRequestPacket@@QEAA@XZ
    MCAPI ModalFormRequestPacket();

    // symbol: ??0ModalFormRequestPacket@@QEAA@IAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI ModalFormRequestPacket(uint, std::string const&);

    // NOLINTEND
};
