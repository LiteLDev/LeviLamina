#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/world/actor/player/PlayerActionType.h"

class PlayerActionPacket : public ::Packet {
public:
    // prevent constructor by default
    PlayerActionPacket& operator=(PlayerActionPacket const&);
    PlayerActionPacket(PlayerActionPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?getId@PlayerActionPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@PlayerActionPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 3, symbol: ?write@PlayerActionPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream&) const;

    // vIndex: 7, symbol:
    // ?_read@PlayerActionPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream&);

    // symbol: ??1PlayerActionPacket@@UEAA@XZ
    MCVAPI ~PlayerActionPacket();

    // symbol: ??0PlayerActionPacket@@QEAA@XZ
    MCAPI PlayerActionPacket();

    // symbol: ??0PlayerActionPacket@@QEAA@W4PlayerActionType@@VActorRuntimeID@@@Z
    MCAPI PlayerActionPacket(::PlayerActionType, class ActorRuntimeID);

    // symbol: ??0PlayerActionPacket@@QEAA@W4PlayerActionType@@AEBVBlockPos@@VActorRuntimeID@@@Z
    MCAPI PlayerActionPacket(::PlayerActionType, class BlockPos const&, class ActorRuntimeID);

    // symbol: ??0PlayerActionPacket@@QEAA@W4PlayerActionType@@AEBVBlockPos@@HVActorRuntimeID@@@Z
    MCAPI PlayerActionPacket(::PlayerActionType, class BlockPos const&, int, class ActorRuntimeID);

    // symbol: ??0PlayerActionPacket@@QEAA@W4PlayerActionType@@AEBVBlockPos@@EVActorRuntimeID@@@Z
    MCAPI PlayerActionPacket(::PlayerActionType, class BlockPos const&, uchar, class ActorRuntimeID);

    // symbol: ??0PlayerActionPacket@@QEAA@W4PlayerActionType@@AEBVBlockPos@@1HVActorRuntimeID@@@Z
    MCAPI
    PlayerActionPacket(::PlayerActionType, class BlockPos const&, class BlockPos const&, int, class ActorRuntimeID);

    // symbol: ?getIsFromServerPlayerMovementSystem@PlayerActionPacket@@QEBA_NXZ
    MCAPI bool getIsFromServerPlayerMovementSystem() const;

    // symbol: ?setFromServerPlayerMovementSystem@PlayerActionPacket@@QEAAX_N@Z
    MCAPI void setFromServerPlayerMovementSystem(bool);

    // NOLINTEND
};
