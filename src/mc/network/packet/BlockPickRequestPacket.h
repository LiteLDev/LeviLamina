#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/level/BlockPos.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class BlockPickRequestPacket : public ::Packet {
public:
    BlockPos mPos;      // this+0x30
    bool     mWithData; // this+0x3C
    uchar    mMaxSlots; // this+0x3D

    // prevent constructor by default
    BlockPickRequestPacket& operator=(BlockPickRequestPacket const&);
    BlockPickRequestPacket(BlockPickRequestPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1BlockPickRequestPacket@@UEAA@XZ
    virtual ~BlockPickRequestPacket() = default;

    // vIndex: 1, symbol: ?getId@BlockPickRequestPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@BlockPickRequestPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 4, symbol: ?write@BlockPickRequestPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8, symbol:
    // ?_read@BlockPickRequestPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    // symbol: ??0BlockPickRequestPacket@@QEAA@XZ
    MCAPI BlockPickRequestPacket();

    // NOLINTEND
};
