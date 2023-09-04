#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/math/Vec3.h"
#include "mc/world/level/dimension/Dimension.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/world/AutomaticID.h"

class ChangeDimensionPacket : public ::Packet {
public:
    DimensionType mDimensionId; // this+0x30
    Vec3          mPos;         // this+0x34
    bool          mRespawn;     // this+0x40

    // prevent constructor by default
    ChangeDimensionPacket& operator=(ChangeDimensionPacket const&) = delete;
    ChangeDimensionPacket(ChangeDimensionPacket const&)            = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?getId@ChangeDimensionPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@ChangeDimensionPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 3, symbol: ?write@ChangeDimensionPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream&) const;

    // vIndex: 7, symbol:
    // ?_read@ChangeDimensionPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void, std::error_code> _read(class ReadOnlyBinaryStream&);

    // symbol: ??1ChangeDimensionPacket@@UEAA@XZ
    MCVAPI ~ChangeDimensionPacket();

    // symbol: ??0ChangeDimensionPacket@@QEAA@XZ
    MCAPI ChangeDimensionPacket();

    // symbol: ??0ChangeDimensionPacket@@QEAA@V?$AutomaticID@VDimension@@H@@VVec3@@_N@Z
    MCAPI ChangeDimensionPacket(class AutomaticID<class Dimension, int>, class Vec3, bool);

    // NOLINTEND
};
