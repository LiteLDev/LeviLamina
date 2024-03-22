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
    InventoryContentPacket& operator=(InventoryContentPacket const&);
    InventoryContentPacket(InventoryContentPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1InventoryContentPacket@@UEAA@XZ
    virtual ~InventoryContentPacket();

    // vIndex: 1, symbol: ?getId@InventoryContentPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@InventoryContentPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 4, symbol: ?write@InventoryContentPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8, symbol:
    // ?_read@InventoryContentPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    // symbol: ??0InventoryContentPacket@@QEAA@XZ
    MCAPI InventoryContentPacket();

    // symbol:
    // ??0InventoryContentPacket@@QEAA@W4ContainerID@@AEBV?$vector@VItemStack@@V?$allocator@VItemStack@@@std@@@std@@@Z
    MCAPI InventoryContentPacket(::ContainerID id, std::vector<class ItemStack> const& items);

    // symbol: ?fromPlayerInventoryId@InventoryContentPacket@@SA?AV1@W4ContainerID@@AEAVPlayer@@@Z
    MCAPI static class InventoryContentPacket fromPlayerInventoryId(::ContainerID id, class Player& player);

    // NOLINTEND
};
