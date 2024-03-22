#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/inventory/network/ItemStackRequestBatch.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class ItemStackRequestPacket : public ::Packet {
public:
    std::unique_ptr<ItemStackRequestBatch> mRequestBatch; // this+0x30

    // prevent constructor by default
    ItemStackRequestPacket& operator=(ItemStackRequestPacket const&);
    ItemStackRequestPacket(ItemStackRequestPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ItemStackRequestPacket@@UEAA@XZ
    virtual ~ItemStackRequestPacket() = default;

    // vIndex: 1, symbol: ?getId@ItemStackRequestPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@ItemStackRequestPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 4, symbol: ?write@ItemStackRequestPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8, symbol:
    // ?_read@ItemStackRequestPacket@@MEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    // symbol: ??0ItemStackRequestPacket@@QEAA@XZ
    MCAPI ItemStackRequestPacket();

    // symbol: ?getRequestBatch@ItemStackRequestPacket@@QEBAAEBVItemStackRequestBatch@@XZ
    MCAPI class ItemStackRequestBatch const& getRequestBatch() const;

    // NOLINTEND
};
