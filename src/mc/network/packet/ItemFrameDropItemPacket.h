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
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?getId@ItemFrameDropItemPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@ItemFrameDropItemPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 3, symbol: ?write@ItemFrameDropItemPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream&) const;

    // vIndex: 7, symbol:
    // ?_read@ItemFrameDropItemPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void, std::error_code> _read(class ReadOnlyBinaryStream&);

    // symbol: ??1ItemFrameDropItemPacket@@UEAA@XZ
    MCVAPI ~ItemFrameDropItemPacket();

    // symbol: ??0ItemFrameDropItemPacket@@QEAA@XZ
    MCAPI ItemFrameDropItemPacket();

    // NOLINTEND
};
