#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/UpdateBlockPacket.h"

class UpdateBlockSyncedPacket : public ::UpdateBlockPacket {
public:
    // prevent constructor by default
    UpdateBlockSyncedPacket& operator=(UpdateBlockSyncedPacket const&);
    UpdateBlockSyncedPacket(UpdateBlockSyncedPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?getId@UpdateBlockSyncedPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@UpdateBlockSyncedPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 3, symbol: ?write@UpdateBlockSyncedPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream&) const;

    // vIndex: 7, symbol:
    // ?_read@UpdateBlockSyncedPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void, std::error_code> _read(class ReadOnlyBinaryStream&);

    // symbol: ??1UpdateBlockSyncedPacket@@UEAA@XZ
    MCVAPI ~UpdateBlockSyncedPacket();

    // symbol: ??0UpdateBlockSyncedPacket@@QEAA@XZ
    MCAPI UpdateBlockSyncedPacket();

    // symbol: ??0UpdateBlockSyncedPacket@@QEAA@AEBVBlockPos@@IIEAEBUActorBlockSyncMessage@@@Z
    MCAPI UpdateBlockSyncedPacket(class BlockPos const&, uint, uint, uchar, struct ActorBlockSyncMessage const&);

    // NOLINTEND
};
