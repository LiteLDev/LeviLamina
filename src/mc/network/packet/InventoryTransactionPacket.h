#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class InventoryTransactionPacket : public ::Packet {
public:
    // prevent constructor by default
    InventoryTransactionPacket& operator=(InventoryTransactionPacket const&) = delete;
    InventoryTransactionPacket(InventoryTransactionPacket const&)            = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?getId@InventoryTransactionPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@InventoryTransactionPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 3, symbol: ?write@InventoryTransactionPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream&) const;

    // vIndex: 7, symbol:
    // ?_read@InventoryTransactionPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void, std::error_code> _read(class ReadOnlyBinaryStream&);

    // symbol: ??1InventoryTransactionPacket@@UEAA@XZ
    MCVAPI ~InventoryTransactionPacket();

    // symbol:
    // ??0InventoryTransactionPacket@@QEAA@V?$unique_ptr@VComplexInventoryTransaction@@U?$default_delete@VComplexInventoryTransaction@@@std@@@std@@_N@Z
    MCAPI InventoryTransactionPacket(std::unique_ptr<class ComplexInventoryTransaction>, bool);

    // symbol: ??0InventoryTransactionPacket@@QEAA@XZ
    MCAPI InventoryTransactionPacket();

    // symbol: ?postLoadItems@InventoryTransactionPacket@@QEBAXAEAVBlockPalette@@_N@Z
    MCAPI void postLoadItems(class BlockPalette&, bool) const;

    // NOLINTEND
};
