#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class PurchaseReceiptPacket : public ::Packet {
public:
    std::vector<std::string> mPurchaseRecipts; // this+0x30

    // prevent constructor by default
    PurchaseReceiptPacket& operator=(PurchaseReceiptPacket const&);
    PurchaseReceiptPacket(PurchaseReceiptPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1PurchaseReceiptPacket@@UEAA@XZ
    virtual ~PurchaseReceiptPacket() = default;

    // vIndex: 1, symbol: ?getId@PurchaseReceiptPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@PurchaseReceiptPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 4, symbol: ?write@PurchaseReceiptPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8, symbol:
    // ?_read@PurchaseReceiptPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    // symbol: ??0PurchaseReceiptPacket@@QEAA@XZ
    MCAPI PurchaseReceiptPacket();

    // symbol: ?sMaxReceiptsPerPacket@PurchaseReceiptPacket@@2_KB
    MCAPI static uint64 const sMaxReceiptsPerPacket;

    // NOLINTEND
};
