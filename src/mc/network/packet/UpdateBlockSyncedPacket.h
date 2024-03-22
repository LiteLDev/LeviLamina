#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/level/ActorBlockSyncMessage.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/UpdateBlockPacket.h"

class UpdateBlockSyncedPacket : public ::UpdateBlockPacket {
public:
    ActorBlockSyncMessage mEntityBlockSyncMessage; // this+0x48

    // prevent constructor by default
    UpdateBlockSyncedPacket& operator=(UpdateBlockSyncedPacket const&);
    UpdateBlockSyncedPacket(UpdateBlockSyncedPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1UpdateBlockSyncedPacket@@UEAA@XZ
    virtual ~UpdateBlockSyncedPacket();

    // vIndex: 1, symbol: ?getId@UpdateBlockSyncedPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@UpdateBlockSyncedPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 4, symbol: ?write@UpdateBlockSyncedPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8, symbol:
    // ?_read@UpdateBlockSyncedPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    // symbol: ??0UpdateBlockSyncedPacket@@QEAA@XZ
    MCAPI UpdateBlockSyncedPacket();

    // symbol: ??0UpdateBlockSyncedPacket@@QEAA@AEBVBlockPos@@IIEAEBUActorBlockSyncMessage@@@Z
    MCAPI UpdateBlockSyncedPacket(
        class BlockPos const&               pos,
        uint                                layer,
        uint                                runtimeId,
        uchar                               updateFlags,
        struct ActorBlockSyncMessage const& syncMsg
    );

    // NOLINTEND
};
