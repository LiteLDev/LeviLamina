#pragma once

#include "../NetworkBlockPosition.h"
#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class BlockEventPacket : public ::Packet {
public:
    NetworkBlockPosition mPos; // this+0x2c
    int32_t                  mB0;  // this+0x38
    int32_t                  mB1;  // this+0x3c

    // prevent constructor by default
    BlockEventPacket& operator=(BlockEventPacket const&) = delete;
    BlockEventPacket(BlockEventPacket const&)            = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?getId@BlockEventPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@BlockEventPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 3, symbol: ?write@BlockEventPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream&) const;

    // vIndex: 7, symbol:
    // ?_read@BlockEventPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void, std::error_code> _read(class ReadOnlyBinaryStream&);

    // symbol: ??1BlockEventPacket@@UEAA@XZ
    MCVAPI ~BlockEventPacket();

    // symbol: ??0BlockEventPacket@@QEAA@XZ
    MCAPI BlockEventPacket();

    // symbol: ??0BlockEventPacket@@QEAA@VBlockPos@@HH@Z
    MCAPI BlockEventPacket(class BlockPos, int, int);

    // NOLINTEND
};
