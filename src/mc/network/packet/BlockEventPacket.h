#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/network/NetworkBlockPosition.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class BlockEventPacket : public ::Packet {
public:
    NetworkBlockPosition mPos; // this+0x2c
    int                  mB0;  // this+0x38
    int                  mB1;  // this+0x3c

    // prevent constructor by default
    BlockEventPacket& operator=(BlockEventPacket const&);
    BlockEventPacket(BlockEventPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1BlockEventPacket@@UEAA@XZ
    virtual ~BlockEventPacket();

    // vIndex: 1, symbol: ?getId@BlockEventPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@BlockEventPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 4, symbol: ?write@BlockEventPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8, symbol:
    // ?_read@BlockEventPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    // symbol: ??0BlockEventPacket@@QEAA@XZ
    MCAPI BlockEventPacket();

    // symbol: ??0BlockEventPacket@@QEAA@VBlockPos@@HH@Z
    MCAPI BlockEventPacket(class BlockPos pos, int b0, int b1);

    // NOLINTEND
};
