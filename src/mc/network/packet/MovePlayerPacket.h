#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/rendergraph/Packet.h"
#include "mc/deps/core/math/Vec2.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/entity/components/PlayerPositionModeComponent.h"
#include "mc/legacy/ActorRuntimeID.h"
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/PlayerInputTick.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class Player;
class ReadOnlyBinaryStream;
// clang-format on

class MovePlayerPacket : public ::Packet {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ActorRuntimeID>                            mPlayerID;
    ::ll::TypedStorage<4, 12, ::Vec3>                                     mPos;
    ::ll::TypedStorage<4, 8, ::Vec2>                                      mRot;
    ::ll::TypedStorage<4, 4, float>                                       mYHeadRot;
    ::ll::TypedStorage<1, 1, ::PlayerPositionModeComponent::PositionMode> mResetPosition;
    ::ll::TypedStorage<1, 1, bool>                                        mOnGround;
    ::ll::TypedStorage<8, 8, ::ActorRuntimeID>                            mRidingID;
    ::ll::TypedStorage<4, 4, int>                                         mCause;
    ::ll::TypedStorage<4, 4, int>                                         mSourceEntityType;
    ::ll::TypedStorage<8, 8, ::PlayerInputTick>                           mTick;
    // NOLINTEND

public:
    // prevent constructor by default
    MovePlayerPacket();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const /*override*/;

    // vIndex: 2
    virtual ::std::string getName() const /*override*/;

    // vIndex: 4
    virtual void write(::BinaryStream& stream) const /*override*/;

    // vIndex: 7
    virtual bool isValid() const /*override*/;

    // vIndex: 8
    virtual ::Bedrock::Result<void> _read(::ReadOnlyBinaryStream& stream) /*override*/;

    // vIndex: 0
    virtual ~MovePlayerPacket() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI MovePlayerPacket(::Player const& player, ::Vec3 const& pos);

    MCAPI MovePlayerPacket(
        ::Player const&                             player,
        ::PlayerPositionModeComponent::PositionMode resetPosition,
        int                                         cause,
        int                                         sourceEntityType
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Player const& player, ::Vec3 const& pos);

    MCAPI void* $ctor(
        ::Player const&                             player,
        ::PlayerPositionModeComponent::PositionMode resetPosition,
        int                                         cause,
        int                                         sourceEntityType
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::MinecraftPacketIds $getId() const;

    MCAPI ::std::string $getName() const;

    MCAPI void $write(::BinaryStream& stream) const;

    MCAPI bool $isValid() const;

    MCAPI ::Bedrock::Result<void> $_read(::ReadOnlyBinaryStream& stream);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
