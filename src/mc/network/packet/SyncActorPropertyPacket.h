#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class SyncActorPropertyPacket : public ::Packet {
public:
    // prevent constructor by default
    SyncActorPropertyPacket& operator=(SyncActorPropertyPacket const&) = delete;
    SyncActorPropertyPacket(SyncActorPropertyPacket const&)            = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?getId@SyncActorPropertyPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@SyncActorPropertyPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 3, symbol: ?write@SyncActorPropertyPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream&) const;

    // vIndex: 7, symbol:
    // ?_read@SyncActorPropertyPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void, std::error_code> _read(class ReadOnlyBinaryStream&);

    // symbol: ??1SyncActorPropertyPacket@@UEAA@XZ
    MCVAPI ~SyncActorPropertyPacket();

    // symbol: ??0SyncActorPropertyPacket@@QEAA@AEBVHashedString@@AEBVPropertyGroupManager@@@Z
    MCAPI SyncActorPropertyPacket(class HashedString const&, class PropertyGroupManager const&);

    // symbol: ??0SyncActorPropertyPacket@@QEAA@XZ
    MCAPI SyncActorPropertyPacket();

    // NOLINTEND
};
