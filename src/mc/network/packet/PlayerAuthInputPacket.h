#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/Packet.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class ReadOnlyBinaryStream;
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
    ::ll::UntypedStorage<4, 8>  mUnk63de45;
    ::ll::UntypedStorage<4, 12> mUnk42b2d2;
    ::ll::UntypedStorage<4, 4>  mUnkf016f9;
    ::ll::UntypedStorage<4, 12> mUnkfd98a4;
    ::ll::UntypedStorage<4, 8>  mUnkf7c4e6;
    ::ll::UntypedStorage<4, 8>  mUnk15e2f4;
    ::ll::UntypedStorage<4, 8>  mUnk894f50;
    ::ll::UntypedStorage<4, 8>  mUnkeb2562;
    ::ll::UntypedStorage<4, 12> mUnkfcd95a;
    ::ll::UntypedStorage<4, 8>  mUnkde335b;
    ::ll::UntypedStorage<8, 16> mUnkdcc37a;
    ::ll::UntypedStorage<4, 4>  mUnk95d7b7;
    ::ll::UntypedStorage<4, 4>  mUnk8b5a95;
    ::ll::UntypedStorage<4, 4>  mUnk316d20;
    ::ll::UntypedStorage<8, 8>  mUnk3d1b1c;
    ::ll::UntypedStorage<8, 8>  mUnk9ed3b2;
    ::ll::UntypedStorage<8, 8>  mUnkbd8f6f;
    ::ll::UntypedStorage<8, 24> mUnk80256d;
    ::ll::UntypedStorage<8, 8>  mUnkff20eb;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerAuthInputPacket& operator=(PlayerAuthInputPacket const&);
    PlayerAuthInputPacket(PlayerAuthInputPacket const&);
    PlayerAuthInputPacket();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PlayerAuthInputPacket() /*override*/;

    virtual ::MinecraftPacketIds getId() const /*override*/;

    virtual ::std::string getName() const /*override*/;

    virtual void write(::BinaryStream& stream) const /*override*/;

    virtual bool isValid() const /*override*/;

    virtual ::Bedrock::Result<void> _read(::ReadOnlyBinaryStream& stream) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PlayerAuthInputPacket(::PlayerAuthInputPacket&&);

    MCAPI ::PlayerAuthInputPacket& operator=(::PlayerAuthInputPacket&&);

    MCAPI ::PlayerActionComponent readIntoComponent() const;

    MCAPI_C void setFromComponent(::PlayerActionComponent& input);
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
