#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/network/TypedClientNetId.h"
#include "mc/world/containers/ContainerEnumName.h"
#include "mc/world/inventory/transaction/ComplexInventoryTransaction.h"
#include "mc/world/item/components/ItemStackLegacyRequestIdTag.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class InventoryTransactionPacket : public ::Packet {
public:
    ItemStackLegacyRequestId                                      mLegacyRequestId;    // this+0x30
    std::vector<std::pair<ContainerEnumName, std::vector<uchar>>> mLegacySetItemSlots; // this+0x40
    std::unique_ptr<ComplexInventoryTransaction>                  mTransaction;        // this+0x58
    bool                                                          mIsClientSide;       // this+0x60

    // prevent constructor by default
    InventoryTransactionPacket& operator=(InventoryTransactionPacket const&);
    InventoryTransactionPacket(InventoryTransactionPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1InventoryTransactionPacket@@UEAA@XZ
    virtual ~InventoryTransactionPacket();

    // vIndex: 1, symbol: ?getId@InventoryTransactionPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@InventoryTransactionPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 4, symbol: ?write@InventoryTransactionPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8, symbol:
    // ?_read@InventoryTransactionPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    // symbol: ??0InventoryTransactionPacket@@QEAA@XZ
    MCAPI InventoryTransactionPacket();

    // symbol:
    // ??0InventoryTransactionPacket@@QEAA@V?$unique_ptr@VComplexInventoryTransaction@@U?$default_delete@VComplexInventoryTransaction@@@std@@@std@@_N@Z
    MCAPI InventoryTransactionPacket(std::unique_ptr<class ComplexInventoryTransaction> transaction, bool isClientSide);

    // symbol: ?postLoadItems@InventoryTransactionPacket@@QEBAXAEAVBlockPalette@@_N@Z
    MCAPI void postLoadItems(class BlockPalette& blockPalette, bool isClientSide) const;

    // NOLINTEND
};
