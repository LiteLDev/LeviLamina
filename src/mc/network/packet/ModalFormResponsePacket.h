#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/json/Value.h"
#include "mc/enums/ModalFormCancelReason.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class ModalFormResponsePacket : public ::Packet {
public:
    uint                                 mFormId;           // this+0x30
    std::optional<Json::Value>           mJSONResponse;     // this+0x38
    std::optional<ModalFormCancelReason> mFormCancelReason; // this+0x50

    // prevent constructor by default
    ModalFormResponsePacket& operator=(ModalFormResponsePacket const&);
    ModalFormResponsePacket(ModalFormResponsePacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ModalFormResponsePacket@@UEAA@XZ
    virtual ~ModalFormResponsePacket() = default;

    // vIndex: 1, symbol: ?getId@ModalFormResponsePacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@ModalFormResponsePacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 4, symbol: ?write@ModalFormResponsePacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8, symbol:
    // ?_read@ModalFormResponsePacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    // symbol: ??0ModalFormResponsePacket@@QEAA@XZ
    MCAPI ModalFormResponsePacket();

    // NOLINTEND
};
