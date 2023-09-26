#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/ActorRuntimeID.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class TakeItemActorPacket : public ::Packet {
public:
    ActorRuntimeID mItemId;  // this+0x30
    ActorRuntimeID mActorId; // this+0x38

    // prevent constructor by default
    TakeItemActorPacket& operator=(TakeItemActorPacket const&);
    TakeItemActorPacket(TakeItemActorPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?getId@TakeItemActorPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@TakeItemActorPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 3, symbol: ?write@TakeItemActorPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream&) const;

    // vIndex: 7, symbol:
    // ?_read@TakeItemActorPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream&);

    // symbol: ??1TakeItemActorPacket@@UEAA@XZ
    MCVAPI ~TakeItemActorPacket();

    // symbol: ??0TakeItemActorPacket@@QEAA@XZ
    MCAPI TakeItemActorPacket();

    // symbol: ??0TakeItemActorPacket@@QEAA@VActorRuntimeID@@0@Z
    MCAPI TakeItemActorPacket(class ActorRuntimeID, class ActorRuntimeID);

    // NOLINTEND
};
