#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/entity/components/PlayerPositionModeComponent.h"
#include "mc/entity/utilities/ActorType.h"
#include "mc/events/MinecraftEventing.h"
#include "mc/math/Vec2.h"
#include "mc/math/Vec3.h"
#include "mc/world/ActorRuntimeID.h"
#include "mc/world/level/Tick.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/entity/components/PlayerPositionModeComponent.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class MovePlayerPacket : public ::Packet {
public:
    ActorRuntimeID                            mPlayerID;         // this+0x30
    Vec3                                      mPos;              // this+0x38
    Vec2                                      mRot;              // this+0x44
    float                                     mYHeadRot;         // this+0x4C
    PlayerPositionModeComponent::PositionMode mResetPosition;    // this+0x50
    bool                                      mOnGround;         // this+0x51
    ActorRuntimeID                            mRidingID;         // this+0x58
    MinecraftEventing::TeleportationCause     mCause;            // this+0x60
    ActorType                                 mSourceEntityType; // this+0x64
    Tick                                      mTick;             // this+0x68

    // prevent constructor by default
    MovePlayerPacket& operator=(MovePlayerPacket const&);
    MovePlayerPacket(MovePlayerPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1MovePlayerPacket@@UEAA@XZ
    virtual ~MovePlayerPacket();

    // vIndex: 1, symbol: ?getId@MovePlayerPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@MovePlayerPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 4, symbol: ?write@MovePlayerPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 7, symbol: ?isValid@MovePlayerPacket@@UEBA_NXZ
    virtual bool isValid() const;

    // vIndex: 8, symbol:
    // ?_read@MovePlayerPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    // symbol: ??0MovePlayerPacket@@QEAA@XZ
    MCAPI MovePlayerPacket();

    // symbol: ??0MovePlayerPacket@@QEAA@AEBVPlayer@@AEBVVec3@@@Z
    MCAPI MovePlayerPacket(class Player const& player, class Vec3 const& pos);

    // symbol: ??0MovePlayerPacket@@QEAA@AEBVPlayer@@W4PositionMode@PlayerPositionModeComponent@@HH@Z
    MCAPI MovePlayerPacket(
        class Player const&                         player,
        ::PlayerPositionModeComponent::PositionMode resetPosition,
        int                                         cause,
        int                                         sourceEntityType
    );

    // NOLINTEND
};
