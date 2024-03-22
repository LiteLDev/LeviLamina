#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/containers/ContainerID.h"
#include "mc/world/item/NetworkItemStackDescriptor.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/world/containers/ContainerID.h"

class InventorySlotPacket : public ::Packet {
public:
    ContainerID                mInventoryId; // this+0x30
    uint                       mSlot;        // this+0x34
    NetworkItemStackDescriptor mItem;        // this+0x38

    // prevent constructor by default
    InventorySlotPacket& operator=(InventorySlotPacket const&);
    InventorySlotPacket(InventorySlotPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1InventorySlotPacket@@UEAA@XZ
    virtual ~InventorySlotPacket();

    // vIndex: 1, symbol: ?getId@InventorySlotPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@InventorySlotPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 4, symbol: ?write@InventorySlotPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8, symbol:
    // ?_read@InventorySlotPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    // symbol: ??0InventorySlotPacket@@QEAA@XZ
    MCAPI InventorySlotPacket();

    // symbol: ??0InventorySlotPacket@@QEAA@W4ContainerID@@IAEBVItemStack@@@Z
    MCAPI InventorySlotPacket(::ContainerID id, uint slot, class ItemStack const& item);

    // NOLINTEND
};
