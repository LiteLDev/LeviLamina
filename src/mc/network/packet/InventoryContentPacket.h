#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/containers/ContainerID.h"
#include "mc/world/item/NetworkItemStackDescriptor.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/world/containers/ContainerID.h"

class InventoryContentPacket : public ::Packet {
public:
    ContainerID                             mInventoryId; // this+0x30
    std::vector<NetworkItemStackDescriptor> mSlots;       // this+0x38

    // prevent constructor by default
    InventoryContentPacket& operator=(InventoryContentPacket const&) = delete;
    InventoryContentPacket(InventoryContentPacket const&)            = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?getId@InventoryContentPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@InventoryContentPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 3, symbol: ?write@InventoryContentPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream&) const;

    // vIndex: 7, symbol:
    // ?_read@InventoryContentPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void, std::error_code> _read(class ReadOnlyBinaryStream&);

    // symbol: ??1InventoryContentPacket@@UEAA@XZ
    MCVAPI ~InventoryContentPacket();

    // symbol: ??0InventoryContentPacket@@QEAA@XZ
    MCAPI InventoryContentPacket();

    // symbol:
    // ??0InventoryContentPacket@@QEAA@W4ContainerID@@AEBV?$vector@VItemStack@@V?$allocator@VItemStack@@@std@@@std@@@Z
    MCAPI InventoryContentPacket(::ContainerID, std::vector<class ItemStack> const&);

    // symbol: ?fromPlayerInventoryId@InventoryContentPacket@@SA?AV1@W4ContainerID@@AEAVPlayer@@@Z
    MCAPI static class InventoryContentPacket fromPlayerInventoryId(::ContainerID, class Player&);

    // NOLINTEND
};
