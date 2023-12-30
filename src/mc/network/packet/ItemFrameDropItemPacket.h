#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class ItemFrameDropItemPacket : public ::Packet {
public:
    // prevent constructor by default
    ItemFrameDropItemPacket& operator=(ItemFrameDropItemPacket const&);
    ItemFrameDropItemPacket(ItemFrameDropItemPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1ItemFrameDropItemPacket@@UEAA@XZ
    virtual ~ItemFrameDropItemPacket();

    // vIndex: 1, symbol: ?getId@ItemFrameDropItemPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@ItemFrameDropItemPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 3, symbol: ?write@ItemFrameDropItemPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 7, symbol:
    // ?_read@ItemFrameDropItemPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream&);

    // symbol: ??0ItemFrameDropItemPacket@@QEAA@XZ
    MCAPI ItemFrameDropItemPacket();

    // NOLINTEND
};
