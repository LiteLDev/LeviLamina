#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class ModalFormRequestPacket : public ::Packet {
public:
    uint        mFormId;   // this+0x30
    std::string mFormJSON; // this+0x38

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

    // vIndex: 4, symbol: ?write@ModalFormRequestPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8, symbol:
    // ?_read@ModalFormRequestPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    // symbol: ??0ModalFormRequestPacket@@QEAA@XZ
    MCAPI ModalFormRequestPacket();

    // symbol: ??0ModalFormRequestPacket@@QEAA@IAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI ModalFormRequestPacket(uint formId, std::string const& formJSON);

    // NOLINTEND
};
