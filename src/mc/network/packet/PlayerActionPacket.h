#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/network/NetworkBlockPosition.h"
#include "mc/world/ActorRuntimeID.h"
#include "mc/world/actor/player/PlayerActionType.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/world/actor/player/PlayerActionType.h"

class PlayerActionPacket : public ::Packet {
public:
    NetworkBlockPosition mPos;                               // this+0x30
    NetworkBlockPosition mResultPos;                         // this+0x3C
    int                  mFace;                              // this+0x48
    PlayerActionType     mAction;                            // this+0x4C
    ActorRuntimeID       mRuntimeId;                         // this+0x50
    bool                 mtIsFromServerPlayerMovementSystem; // this+0x58

    // prevent constructor by default
    PlayerActionPacket& operator=(PlayerActionPacket const&);
    PlayerActionPacket(PlayerActionPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1PlayerActionPacket@@UEAA@XZ
    virtual ~PlayerActionPacket();

    // vIndex: 1, symbol: ?getId@PlayerActionPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@PlayerActionPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 4, symbol: ?write@PlayerActionPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8, symbol:
    // ?_read@PlayerActionPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    // symbol: ??0PlayerActionPacket@@QEAA@XZ
    MCAPI PlayerActionPacket();

    // symbol: ??0PlayerActionPacket@@QEAA@W4PlayerActionType@@VActorRuntimeID@@@Z
    MCAPI PlayerActionPacket(::PlayerActionType action, class ActorRuntimeID runtimeId);

    // symbol: ??0PlayerActionPacket@@QEAA@W4PlayerActionType@@AEBVBlockPos@@VActorRuntimeID@@@Z
    MCAPI PlayerActionPacket(::PlayerActionType action, class BlockPos const& pos, class ActorRuntimeID runtimeId);

    // symbol: ??0PlayerActionPacket@@QEAA@W4PlayerActionType@@AEBVBlockPos@@HVActorRuntimeID@@@Z
    MCAPI
    PlayerActionPacket(::PlayerActionType action, class BlockPos const& pos, int data, class ActorRuntimeID runtimeId);

    // symbol: ??0PlayerActionPacket@@QEAA@W4PlayerActionType@@AEBVBlockPos@@EVActorRuntimeID@@@Z
    MCAPI PlayerActionPacket(
        ::PlayerActionType    action,
        class BlockPos const& pos,
        uchar                 face,
        class ActorRuntimeID  runtimeId
    );

    // symbol: ??0PlayerActionPacket@@QEAA@W4PlayerActionType@@AEBVBlockPos@@1HVActorRuntimeID@@@Z
    MCAPI PlayerActionPacket(
        ::PlayerActionType    action,
        class BlockPos const& pos,
        class BlockPos const&,
        int                  data,
        class ActorRuntimeID runtimeId
    );

    // symbol: ?getIsFromServerPlayerMovementSystem@PlayerActionPacket@@QEBA_NXZ
    MCAPI bool getIsFromServerPlayerMovementSystem() const;

    // symbol: ?setFromServerPlayerMovementSystem@PlayerActionPacket@@QEAAX_N@Z
    MCAPI void setFromServerPlayerMovementSystem(bool);

    // NOLINTEND
};
