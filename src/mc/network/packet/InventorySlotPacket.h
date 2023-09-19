#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/world/containers/ContainerID.h"

class InventorySlotPacket : public ::Packet {
public:
    // prevent constructor by default
    InventorySlotPacket& operator=(InventorySlotPacket const&);
    InventorySlotPacket(InventorySlotPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?getId@InventorySlotPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@InventorySlotPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 3, symbol: ?write@InventorySlotPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream&) const;

    // vIndex: 7, symbol:
    // ?_read@InventorySlotPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void, std::error_code> _read(class ReadOnlyBinaryStream&);

    // symbol: ??1InventorySlotPacket@@UEAA@XZ
    MCVAPI ~InventorySlotPacket();

    // symbol: ??0InventorySlotPacket@@QEAA@W4ContainerID@@IAEBVItemStack@@@Z
    MCAPI InventorySlotPacket(::ContainerID, uint, class ItemStack const&);

    // symbol: ??0InventorySlotPacket@@QEAA@XZ
    MCAPI InventorySlotPacket();

    // NOLINTEND
};
