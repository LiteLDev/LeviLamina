#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/RemoveEntityPacket.h"

class RemoveVolumeEntityPacket : public ::RemoveEntityPacket {
public:
    // prevent constructor by default
    RemoveVolumeEntityPacket& operator=(RemoveVolumeEntityPacket const&) = delete;
    RemoveVolumeEntityPacket(RemoveVolumeEntityPacket const&)            = delete;
    RemoveVolumeEntityPacket()                                           = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?getId@RemoveVolumeEntityPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@RemoveVolumeEntityPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 3, symbol: ?write@RemoveVolumeEntityPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream&) const;

    // vIndex: 7, symbol:
    // ?_read@RemoveVolumeEntityPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void, std::error_code> _read(class ReadOnlyBinaryStream&);

    // symbol: ??1RemoveVolumeEntityPacket@@UEAA@XZ
    MCVAPI ~RemoveVolumeEntityPacket();

    // symbol: ??0RemoveVolumeEntityPacket@@QEAA@AEAVEntityContext@@@Z
    MCAPI RemoveVolumeEntityPacket(class EntityContext&);

    // NOLINTEND
};
