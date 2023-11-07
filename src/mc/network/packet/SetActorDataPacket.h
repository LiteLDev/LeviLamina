#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/ActorRuntimeID.h"
#include "mc/world/actor/DataItem.h"
#include "mc/world/actor/state/PropertySyncData.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class SetActorDataPacket : public ::Packet {
public:
    ActorRuntimeID                         mId;
    std::vector<std::unique_ptr<DataItem>> mPackedItems;
    PropertySyncData                       mSynchedProperties;
    uint64                                 mTick;

    // prevent constructor by default
    SetActorDataPacket& operator=(SetActorDataPacket const&);
    SetActorDataPacket(SetActorDataPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1SetActorDataPacket@@UEAA@XZ
    virtual ~SetActorDataPacket();

    // vIndex: 1, symbol: ?getId@SetActorDataPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@SetActorDataPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 3, symbol: ?write@SetActorDataPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream&) const;

    // vIndex: 7, symbol:
    // ?_read@SetActorDataPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream&);

    // symbol: ??0SetActorDataPacket@@QEAA@XZ
    MCAPI SetActorDataPacket();

    // symbol:
    // ??0SetActorDataPacket@@QEAA@VActorRuntimeID@@AEAVSynchedActorDataEntityWrapper@@PEAVPropertyComponent@@_K_N@Z
    MCAPI SetActorDataPacket(
        class ActorRuntimeID,
        class SynchedActorDataEntityWrapper&,
        class PropertyComponent*,
        uint64,
        bool
    );

    // NOLINTEND
};
