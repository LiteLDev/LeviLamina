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
    SetLastHurtByPacket& operator=(SetLastHurtByPacket const&);
    SetLastHurtByPacket(SetLastHurtByPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1SetLastHurtByPacket@@UEAA@XZ
    virtual ~SetLastHurtByPacket();

    // vIndex: 1, symbol: ?getId@SetLastHurtByPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@SetLastHurtByPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 4, symbol: ?write@SetLastHurtByPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8, symbol:
    // ?_read@SetLastHurtByPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    // symbol: ??0SetLastHurtByPacket@@QEAA@XZ
    MCAPI SetLastHurtByPacket();

    // symbol: ??0SetLastHurtByPacket@@QEAA@W4ActorType@@@Z
    MCAPI explicit SetLastHurtByPacket(::ActorType lastHurtBy);

    // NOLINTEND
};
