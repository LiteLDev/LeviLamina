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
    // vIndex: 0
    virtual ~InventoryTransactionPacket();

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI InventoryTransactionPacket();

    MCAPI InventoryTransactionPacket(std::unique_ptr<class ComplexInventoryTransaction> transaction, bool isClientSide);

    MCAPI void postLoadItems(class BlockPalette& blockPalette, bool isClientSide) const;

    // NOLINTEND
};
