#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec2.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/input/InputMode.h"
#include "mc/entity/components/PlayerBlockActions.h"
#include "mc/input/ClientPlayMode.h"
#include "mc/input/NewInteractionModel.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/Packet.h"
#include "mc/network/packet/PlayerInputTick.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class ItemStackRequestData;
class ReadOnlyBinaryStream;
struct PackedItemUseLegacyInventoryTransaction;
struct PlayerActionComponent;
// clang-format on

class PlayerAuthInputPacket : public ::Packet {
public:
    // PlayerAuthInputPacket inner types define
    enum class InputData : int {
        Ascend                                    = 0,
        Descend                                   = 1,
        NorthJumpDeprecated                       = 2,
        JumpDown                                  = 3,
        SprintDown                                = 4,
        ChangeHeight                              = 5,
        Jumping                                   = 6,
        AutoJumpingInWater                        = 7,
        Sneaking                                  = 8,
        SneakDown                                 = 9,
        Up                                        = 10,
        Down                                      = 11,
        Left                                      = 12,
        Right                                     = 13,
        UpLeft                                    = 14,
        UpRight                                   = 15,
        WantUp                                    = 16,
        WantDown                                  = 17,
        WantDownSlow                              = 18,
        WantUpSlow                                = 19,
        Sprinting                                 = 20,
        AscendBlock                               = 21,
        DescendBlock                              = 22,
        SneakToggleDown                           = 23,
        PersistSneak                              = 24,
        StartSprinting                            = 25,
        StopSprinting                             = 26,
        StartSneaking                             = 27,
        StopSneaking                              = 28,
        StartSwimming                             = 29,
        StopSwimming                              = 30,
        StartJumping                              = 31,
        StartGliding                              = 32,
        StopGliding                               = 33,
        PerformItemInteraction                    = 34,
        PerformBlockActions                       = 35,
        PerformItemStackRequest                   = 36,
        HandledTeleport                           = 37,
        Emoting                                   = 38,
        MissedSwing                               = 39,
        StartCrawling                             = 40,
        StopCrawling                              = 41,
        StartFlying                               = 42,
        StopFlying                                = 43,
        ClientAckServerData                       = 44,
        IsInClientPredictedVehicle                = 45,
        PaddlingLeft                              = 46,
        PaddlingRight                             = 47,
        BlockBreakingDelayEnabled                 = 48,
        HorizontalCollision                       = 49,
        VerticalCollision                         = 50,
        DownLeft                                  = 51,
        DownRight                                 = 52,
        StartUsingItem                            = 53,
        IsCameraRelativeMovementEnabledDeprecated = 54,
        IsRotControlledByMoveDirectionDeprecated  = 55,
        StartSpinAttack                           = 56,
        StopSpinAttack                            = 57,
        IsHotbarOnlyTouch                         = 58,
        JumpReleasedRaw                           = 59,
        JumpPressedRaw                            = 60,
        JumpCurrentRaw                            = 61,
        SneakReleasedRaw                          = 62,
        SneakPressedRaw                           = 63,
        SneakCurrentRaw                           = 64,
        InputNum                                  = 65,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 8, ::Vec2>                                                       mRot;
    ::ll::TypedStorage<4, 12, ::Vec3>                                                      mPos;
    ::ll::TypedStorage<4, 4, float>                                                        mYHeadRot;
    ::ll::TypedStorage<4, 12, ::Vec3>                                                      mPosDelta;
    ::ll::TypedStorage<4, 8, ::Vec2>                                                       mVehicleRot;
    ::ll::TypedStorage<4, 8, ::Vec2>                                                       mAnalogMoveVector;
    ::ll::TypedStorage<4, 8, ::Vec2>                                                       mMove;
    ::ll::TypedStorage<4, 8, ::Vec2>                                                       mInteractRotation;
    ::ll::TypedStorage<4, 12, ::Vec3>                                                      mCameraOrientation;
    ::ll::TypedStorage<4, 8, ::Vec2>                                                       mRawMoveVector;
    ::ll::TypedStorage<8, 16, ::std::bitset<65>>                                           mInputData;
    ::ll::TypedStorage<4, 4, ::InputMode>                                                  mInputMode;
    ::ll::TypedStorage<4, 4, ::ClientPlayMode>                                             mPlayMode;
    ::ll::TypedStorage<4, 4, ::NewInteractionModel>                                        mNewInteractionModel;
    ::ll::TypedStorage<8, 8, ::PlayerInputTick>                                            mClientTick;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PackedItemUseLegacyInventoryTransaction>> mItemUseTransaction;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ItemStackRequestData>>                    mItemStackRequest;
    ::ll::TypedStorage<8, 24, ::PlayerBlockActions>                                        mPlayerBlockActions;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                                              mClientPredictedVehicle;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerAuthInputPacket& operator=(PlayerAuthInputPacket const&);
    PlayerAuthInputPacket(PlayerAuthInputPacket const&);
    PlayerAuthInputPacket();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~PlayerAuthInputPacket() /*override*/;

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const /*override*/;

    // vIndex: 2
    virtual ::std::string getName() const /*override*/;

    // vIndex: 5
    virtual void write(::BinaryStream& stream) const /*override*/;

    // vIndex: 10
    virtual bool isValid() const /*override*/;

    // vIndex: 14
    virtual ::Bedrock::Result<void> _read(::ReadOnlyBinaryStream& stream) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PlayerAuthInputPacket(::PlayerAuthInputPacket&&);

    MCAPI ::PlayerAuthInputPacket& operator=(::PlayerAuthInputPacket&&);

    MCAPI ::PlayerActionComponent readIntoComponent() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::PlayerAuthInputPacket&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::MinecraftPacketIds $getId() const;

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
