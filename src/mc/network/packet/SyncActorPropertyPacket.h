#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/nbt/CompoundTag.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class SyncActorPropertyPacket : public ::Packet {
public:
    CompoundTag mPropertyData; // this+0x30

    // prevent constructor by default
    SyncActorPropertyPacket& operator=(SyncActorPropertyPacket const&);
    SyncActorPropertyPacket(SyncActorPropertyPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1SyncActorPropertyPacket@@UEAA@XZ
    virtual ~SyncActorPropertyPacket();

    // vIndex: 1, symbol: ?getId@SyncActorPropertyPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@SyncActorPropertyPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 4, symbol: ?write@SyncActorPropertyPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8, symbol:
    // ?_read@SyncActorPropertyPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    // symbol: ??0SyncActorPropertyPacket@@QEAA@XZ
    MCAPI SyncActorPropertyPacket();

    // symbol: ??0SyncActorPropertyPacket@@QEAA@AEBVHashedString@@AEBVPropertyGroupManager@@@Z
    MCAPI SyncActorPropertyPacket(class HashedString const&, class PropertyGroupManager const&);

    // NOLINTEND
};
