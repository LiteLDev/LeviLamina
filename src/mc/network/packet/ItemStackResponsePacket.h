#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/inventory/network/ItemStackResponseInfo.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class ItemStackResponsePacket : public ::Packet {
public:
    std::vector<ItemStackResponseInfo> mResponses; // this+0x30

    // prevent constructor by default
    ItemStackResponsePacket& operator=(ItemStackResponsePacket const&);
    ItemStackResponsePacket(ItemStackResponsePacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1ItemStackResponsePacket@@UEAA@XZ
    virtual ~ItemStackResponsePacket();

    // vIndex: 1, symbol: ?getId@ItemStackResponsePacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@ItemStackResponsePacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 4, symbol: ?write@ItemStackResponsePacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8, symbol:
    // ?_read@ItemStackResponsePacket@@MEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    // symbol: ??0ItemStackResponsePacket@@QEAA@XZ
    MCAPI ItemStackResponsePacket();

    // symbol:
    // ??0ItemStackResponsePacket@@QEAA@$$QEAV?$vector@UItemStackResponseInfo@@V?$allocator@UItemStackResponseInfo@@@std@@@std@@@Z
    MCAPI explicit ItemStackResponsePacket(std::vector<struct ItemStackResponseInfo>&& responses);

    // symbol:
    // ?getResponses@ItemStackResponsePacket@@QEBAAEBV?$vector@UItemStackResponseInfo@@V?$allocator@UItemStackResponseInfo@@@std@@@std@@XZ
    MCAPI std::vector<struct ItemStackResponseInfo> const& getResponses() const;

    // NOLINTEND
};
