#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/sem_ver/SemVersion.h"
#include "mc/nbt/CompoundTag.h"
#include "mc/network/NetworkBlockPosition.h"
#include "mc/world/AutomaticID.h"
#include "mc/world/level/dimension/Dimension.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/AddEntityPacket.h"

class AddVolumeEntityPacket : public ::AddEntityPacket {
public:
    CompoundTag          mComponents;     // this+0x30
    std::string          mJsonIdentifier; // this+0x68
    std::string          mInstanceName;   // this+0x88
    NetworkBlockPosition mMinBounds;      // this+0xa8
    NetworkBlockPosition mMaxBounds;      // this+0xb4
    DimensionType        mDimensionType;  // this+0xc0
    SemVersion           mEngineVersion;  // this+0xc8

    // prevent constructor by default
    AddVolumeEntityPacket& operator=(AddVolumeEntityPacket const&);
    AddVolumeEntityPacket(AddVolumeEntityPacket const&);
    AddVolumeEntityPacket();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?getId@AddVolumeEntityPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@AddVolumeEntityPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 3, symbol: ?write@AddVolumeEntityPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream&) const;

    // vIndex: 7, symbol:
    // ?_read@AddVolumeEntityPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void, std::error_code> _read(class ReadOnlyBinaryStream&);

    // symbol: ??1AddVolumeEntityPacket@@UEAA@XZ
    MCVAPI ~AddVolumeEntityPacket();

    // symbol: ??0AddVolumeEntityPacket@@QEAA@AEBVEntityContext@@VCompoundTag@@AEBVSemVersion@@@Z
    MCAPI AddVolumeEntityPacket(class EntityContext const&, class CompoundTag, class SemVersion const&);

    // NOLINTEND
};
