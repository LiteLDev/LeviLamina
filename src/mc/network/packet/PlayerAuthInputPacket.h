#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/entity/components/PackedItemUseLegacyInventoryTransaction.h"
#include "mc/entity/components/PlayerBlockActions.h"
#include "mc/enums/ClientPlayMode.h"
#include "mc/enums/InputMode.h"
#include "mc/enums/NewInteractionModel.h"
#include "mc/math/Vec2.h"
#include "mc/math/Vec3.h"
#include "mc/world/ActorUniqueID.h"
#include "mc/world/inventory/network/ItemStackRequestAction.h"
#include "mc/world/inventory/network/ItemStackRequestData.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class PlayerAuthInputPacket : public ::Packet {
public:
    // PlayerAuthInputPacket inner types define
    enum class InputData : int {
        Ascend                     = 0x0,
        Descend                    = 0x1,
        NorthJump                  = 0x2,
        JumpDown                   = 0x3,
        SprintDown                 = 0x4,
        ChangeHeight               = 0x5,
        Jumping                    = 0x6,
        AutoJumpingInWater         = 0x7,
        Sneaking                   = 0x8,
        SneakDown                  = 0x9,
        Up                         = 0xA,
        Down                       = 0xB,
        Left                       = 0xC,
        Right                      = 0xD,
        UpLeft                     = 0xE,
        UpRight                    = 0xF,
        WantUp                     = 0x10,
        WantDown                   = 0x11,
        WantDownSlow               = 0x12,
        WantUpSlow                 = 0x13,
        Sprinting                  = 0x14,
        AscendBlock                = 0x15,
        DescendBlock               = 0x16,
        SneakToggleDown            = 0x17,
        PersistSneak               = 0x18,
        StartSprinting             = 0x19,
        StopSprinting              = 0x1A,
        StartSneaking              = 0x1B,
        StopSneaking               = 0x1C,
        StartSwimming              = 0x1D,
        StopSwimming               = 0x1E,
        StartJumping               = 0x1F,
        StartGliding               = 0x20,
        StopGliding                = 0x21,
        PerformItemInteraction     = 0x22,
        PerformBlockActions        = 0x23,
        PerformItemStackRequest    = 0x24,
        HandledTeleport            = 0x25,
        Emoting                    = 0x26,
        MissedSwing                = 0x27,
        StartCrawling              = 0x28,
        StopCrawling               = 0x29,
        StartFlying                = 0x2A,
        StopFlying                 = 0x2B,
        ReceivedServerData         = 0x2C,
        InClientPredictedInVehicle = 0x2D,
        PaddlingLeft               = 0x2E,
        PaddlingRight              = 0x2F,
    };

public:
    Vec2                                                     mRot;
    Vec3                                                     mPos;
    float                                                    mYHeadRot;
    Vec3                                                     mPosDelta;
    Vec2                                                     mAnalogMoveVector;
    Vec2                                                     mVehicleRotation;
    Vec2                                                     mMove;
    Vec3                                                     mGazeDir;
    std::bitset<39>                                          mInputData;
    InputMode                                                mInputMode;
    ClientPlayMode                                           mPlayMode;
    NewInteractionModel                                      mNewInteractionModel;
    uint64                                                   mClientTick;
    std::unique_ptr<PackedItemUseLegacyInventoryTransaction> mItemUseTransaction;
    std::unique_ptr<ItemStackRequestData>                    mItemStackRequest;
    PlayerBlockActions                                       mPlayerBlockActions;
    ActorUniqueID                                            mPredictedVehicle;

    // prevent constructor by default
    PlayerAuthInputPacket& operator=(PlayerAuthInputPacket const&);
    PlayerAuthInputPacket(PlayerAuthInputPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1PlayerAuthInputPacket@@UEAA@XZ
    virtual ~PlayerAuthInputPacket();

    // vIndex: 1, symbol: ?getId@PlayerAuthInputPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@PlayerAuthInputPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 4, symbol: ?write@PlayerAuthInputPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 7, symbol: ?isValid@PlayerAuthInputPacket@@UEBA_NXZ
    virtual bool isValid() const;

    // vIndex: 8, symbol:
    // ?_read@PlayerAuthInputPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    // symbol: ??0PlayerAuthInputPacket@@QEAA@XZ
    MCAPI PlayerAuthInputPacket();

    // symbol: ??0PlayerAuthInputPacket@@QEAA@$$QEAV0@@Z
    MCAPI PlayerAuthInputPacket(class PlayerAuthInputPacket&& rhs);

    // symbol: ?getInput@PlayerAuthInputPacket@@QEBA_NW4InputData@1@@Z
    MCAPI bool getInput(::PlayerAuthInputPacket::InputData point) const;

    // symbol: ??4PlayerAuthInputPacket@@QEAAAEAV0@$$QEAV0@@Z
    MCAPI class PlayerAuthInputPacket& operator=(class PlayerAuthInputPacket&& rhs);

    // symbol: ?readIntoComponent@PlayerAuthInputPacket@@QEBA?AUPlayerActionComponent@@XZ
    MCAPI struct PlayerActionComponent readIntoComponent() const;

    // symbol: ?takeCopy@PlayerAuthInputPacket@@QEBA?AV1@XZ
    MCAPI class PlayerAuthInputPacket takeCopy() const;

    // NOLINTEND
};
