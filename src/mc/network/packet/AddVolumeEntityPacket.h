#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/AddEntityPacket.h"

class AddVolumeEntityPacket : public ::AddEntityPacket {
public:
    // prevent constructor by default
    AddVolumeEntityPacket& operator=(AddVolumeEntityPacket const&) = delete;
    AddVolumeEntityPacket(AddVolumeEntityPacket const&)            = delete;
    AddVolumeEntityPacket()                                        = delete;

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
