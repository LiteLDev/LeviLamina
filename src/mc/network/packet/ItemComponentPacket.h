#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/nbt/CompoundTag.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class ItemComponentPacket : public ::Packet {
public:
    std::vector<std::pair<std::string, CompoundTag>> mItems; // this+0x30

    // prevent constructor by default
    ItemComponentPacket& operator=(ItemComponentPacket const&);
    ItemComponentPacket(ItemComponentPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1ItemComponentPacket@@UEAA@XZ
    virtual ~ItemComponentPacket();

    // vIndex: 1, symbol: ?getId@ItemComponentPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@ItemComponentPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 4, symbol: ?write@ItemComponentPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8, symbol:
    // ?_read@ItemComponentPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    // symbol: ??0ItemComponentPacket@@QEAA@XZ
    MCAPI ItemComponentPacket();

    // symbol: ??0ItemComponentPacket@@QEAA@VItemRegistryRef@@@Z
    MCAPI explicit ItemComponentPacket(class ItemRegistryRef);

    // NOLINTEND
};
