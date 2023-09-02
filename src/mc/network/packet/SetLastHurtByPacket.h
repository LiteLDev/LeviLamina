#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/entity/utilities/ActorType.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/entity/utilities/ActorType.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class SetLastHurtByPacket : public ::Packet {
public:
    ActorType mLastHurtBy; // this+0x30

    // prevent constructor by default
    SetLastHurtByPacket& operator=(SetLastHurtByPacket const&) = delete;
    SetLastHurtByPacket(SetLastHurtByPacket const&)            = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?getId@SetLastHurtByPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@SetLastHurtByPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 3, symbol: ?write@SetLastHurtByPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream&) const;

    // vIndex: 7, symbol:
    // ?_read@SetLastHurtByPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void, std::error_code> _read(class ReadOnlyBinaryStream&);

    // symbol: ??1SetLastHurtByPacket@@UEAA@XZ
    MCVAPI ~SetLastHurtByPacket();

    // symbol: ??0SetLastHurtByPacket@@QEAA@W4ActorType@@@Z
    MCAPI SetLastHurtByPacket(::ActorType);

    // symbol: ??0SetLastHurtByPacket@@QEAA@XZ
    MCAPI SetLastHurtByPacket();

    // NOLINTEND
};
