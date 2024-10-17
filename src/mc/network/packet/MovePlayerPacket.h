#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/common/ActorRuntimeID.h"
#include "mc/deps/core/math/Vec2.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/entity/components/PlayerPositionModeComponent.h"
#include "mc/events/MinecraftEventing.h"
#include "mc/world/actor/ActorType.h"
#include "mc/world/level/Tick.h"

// auto generated inclusion list
#include "mc/entity/components/PlayerPositionModeComponent.h"
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/platform/Result.h"

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
    // vIndex: 0
    virtual ~MovePlayerPacket();

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 7
    virtual bool isValid() const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI MovePlayerPacket();

    MCAPI MovePlayerPacket(class Player const& player, class Vec3 const& pos);

    MCAPI MovePlayerPacket(
        class Player const&                         player,
        ::PlayerPositionModeComponent::PositionMode resetPosition,
        int                                         cause,
        int                                         sourceEntityType
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(
        class Player const&                         player,
        ::PlayerPositionModeComponent::PositionMode resetPosition,
        int                                         cause,
        int                                         sourceEntityType
    );

    MCAPI void* ctor$(class Player const& player, class Vec3 const& pos);

    MCAPI void* ctor$();

    MCAPI void dtor$();

    MCAPI class Bedrock::Result<void> _read$(class ReadOnlyBinaryStream& stream);

    MCAPI ::MinecraftPacketIds getId$() const;

    MCAPI std::string getName$() const;

    MCAPI bool isValid$() const;

    MCAPI void write$(class BinaryStream& stream) const;

    // NOLINTEND
};
