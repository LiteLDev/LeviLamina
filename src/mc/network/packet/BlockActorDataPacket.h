#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/nbt/CompoundTag.h"
#include "mc/network/NetworkBlockPosition.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class BlockActorDataPacket : public ::Packet {
public:
    NetworkBlockPosition mPos;  // this+0x2c
    CompoundTag          mData; // this+0x38

    // prevent constructor by default
    BlockActorDataPacket& operator=(BlockActorDataPacket const&);
    BlockActorDataPacket(BlockActorDataPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1BlockActorDataPacket@@UEAA@XZ
    virtual ~BlockActorDataPacket() = default;

    // vIndex: 1, symbol: ?getId@BlockActorDataPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@BlockActorDataPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 4, symbol: ?write@BlockActorDataPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8, symbol:
    // ?_read@BlockActorDataPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    // symbol: ??0BlockActorDataPacket@@QEAA@XZ
    MCAPI BlockActorDataPacket();

    // symbol: ??0BlockActorDataPacket@@QEAA@AEBVBlockPos@@VCompoundTag@@@Z
    MCAPI BlockActorDataPacket(class BlockPos const& pos, class CompoundTag tag);

    // NOLINTEND
};
