#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/enums/SpawnPositionType.h"
#include "mc/network/packet/Packet.h"
#include "mc/world/AutomaticID.h"

class SetSpawnPositionPacket : public ::Packet {
public:
    // prevent constructor by default
    SetSpawnPositionPacket& operator=(SetSpawnPositionPacket const&);
    SetSpawnPositionPacket(SetSpawnPositionPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?getId@SetSpawnPositionPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@SetSpawnPositionPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 3, symbol: ?write@SetSpawnPositionPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream&) const;

    // vIndex: 7, symbol:
    // ?_read@SetSpawnPositionPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream&);

    // symbol: ??1SetSpawnPositionPacket@@UEAA@XZ
    MCVAPI ~SetSpawnPositionPacket();

    // symbol: ??0SetSpawnPositionPacket@@QEAA@XZ
    MCAPI SetSpawnPositionPacket();

    // symbol: ??0SetSpawnPositionPacket@@QEAA@V?$AutomaticID@VDimension@@H@@AEBVBlockPos@@1@Z
    MCAPI SetSpawnPositionPacket(DimensionType, class BlockPos const&, class BlockPos const&);

    // symbol: ??0SetSpawnPositionPacket@@QEAA@W4SpawnPositionType@@V?$AutomaticID@VDimension@@H@@AEBVBlockPos@@@Z
    MCAPI SetSpawnPositionPacket(::SpawnPositionType, DimensionType, class BlockPos const&);

    // NOLINTEND
};
