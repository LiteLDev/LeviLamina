#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/ActorUniqueID.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/entity/utilities/ActorDamageCause.h"
#include "mc/entity/utilities/ActorType.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/events/MinecraftEventing.h"
#include "mc/network/packet/Packet.h"
#include "mc/world/AutomaticID.h"

class LegacyTelemetryEventPacket : public ::Packet {
public:
    // LegacyTelemetryEventPacket inner types declare
    // clang-format off
    struct Data;
    // clang-format on

    // LegacyTelemetryEventPacket inner types define
    enum class Type : int {
        Achievement                      = 0x0,
        Interaction                      = 0x1,
        PortalCreated                    = 0x2,
        PortalUsed                       = 0x3,
        MobKilled                        = 0x4,
        CauldronUsed                     = 0x5,
        PlayerDied                       = 0x6,
        BossKilled                       = 0x7,
        AgentCommand_OBSOLETE            = 0x8,
        AgentCreated                     = 0x9,
        PatternRemoved_OBSOLETE          = 0xA,
        SlashCommand_0                   = 0xB,
        Deprecated_FishBucketed          = 0xC,
        MobBorn                          = 0xD,
        PetDied_OBSOLETE                 = 0xE,
        POICauldronUsed                  = 0xF,
        ComposterUsed                    = 0x10,
        BellUsed                         = 0x11,
        ActorDefinition                  = 0x12,
        RaidUpdate                       = 0x13,
        PlayerMovementAnomaly            = 0x14,
        PlayerMovementCorrected          = 0x15,
        HoneyHarvested                   = 0x16,
        TargetBlockHit                   = 0x17,
        PiglinBarter                     = 0x18,
        PlayerWaxedOrUnwaxedCopper       = 0x19,
        CodeBuilderRuntimeAction         = 0x1A,
        CodeBuilderScoreboard            = 0x1B,
        StriderRiddenInLavaInOverworld_0 = 0x1C,
        SneakCloseToSculkSensor_0        = 0x1D,
    };

    struct Data {
    public:
        Type      mType;        // this+0x0
        std::byte mUsePlayerID; // this+0x4
        union {
            struct {
                MinecraftEventing::AchievementIds mAchievementId;
            } Achievement;

            struct {
                int                                mInteractedEntityType;
                MinecraftEventing::InteractionType mInteractionType;
                int                                mInteractedEntityVariant;
                uchar                              mInteractedEntityColor;
            } Interaction;

            struct {
                int mBuiltInDimension;
            } PortalCreated;

            struct {
                int mFromDimension;
                int mToDimension;
            } PortalUsed;

            struct {
                int64     mKillerEntityId;
                int64     mKilledMobId;
                ActorType mDamageChildType;
                int       mDamageSource;
                int       mTraderTier;
            } MobKilled;

            struct {
                short mContentsType;
                uint  mContentsColor;
                short mFillLevel;
            } CauldronUsed;

            struct {
                int  mKillerId;
                int  mKillerVariant;
                int  mDamageSource;
                bool mInRaid;
            } PlayerDied;

            struct {
                int   mPartySize;
                int64 mBossUniqueId;
                int   mBossType;
            } BossKilled;

            struct {
                int mResult;
                int mResultNumber;
            } AgentCommand;

            struct {
                int mSuccessCount;
                int mErrorCount;
            } SlashCommand;

            struct {
                int   mBabyType;
                int   mBabyVariant;
                uchar mBabyColor;
            } MobBorn;

            struct {
                short                                      mItemId;
                MinecraftEventing::POIBlockInteractionType mInteractionType;
            } POICauldronUsed;

            struct {
                short mItemId;
            } ComposterUsed;

            struct {
                int  mCurrentWave;
                int  mTotalWaves;
                bool mSuccess;
            } BellUsed;

            struct {
                float mPositionDelta;
                float mObservedScore;
                float mThresholdDistance;
                float mThresholdScore;
                int   mThresholdDuration_ms;
            } RaidUpdate;

            struct {
                int mRedstoneLevel;
            } TargetBlockHit;

            struct {
                int  mItemId;
                bool mWasTargetingBarteringPlayer;
            } PiglinBarter;

            struct {
                int mBlockID;
            } PlayerWaxedOrUnwaxedCopper;

            struct {
                int score;
            } CodeBuilderScoreboard;
        }; // this+0x8
        std::string mEntityName;               // this+0x28
        std::string mCommandName;              // this+0x48
        std::string mResultKey;                // this+0x68
        std::string mResultString;             // this+0x88
        std::string mErrorList;                // this+0xA8
        std::string mObjectiveName;            // this+0xC8
        std::string mCodeBuilderRuntimeAction; // this+0xE8

        // prevent constructor by default
        Data& operator=(Data const&);
        Data(Data const&);

    public:
        // NOLINTBEGIN
        // symbol: ??0Data@LegacyTelemetryEventPacket@@QEAA@XZ
        MCAPI Data();

        // symbol: ??1Data@LegacyTelemetryEventPacket@@QEAA@XZ
        MCAPI ~Data();

        // NOLINTEND
    };

    ActorUniqueID mPlayerId;
    Data          mEventData;

public:
    // prevent constructor by default
    LegacyTelemetryEventPacket& operator=(LegacyTelemetryEventPacket const&);
    LegacyTelemetryEventPacket(LegacyTelemetryEventPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1LegacyTelemetryEventPacket@@UEAA@XZ
    virtual ~LegacyTelemetryEventPacket();

    // vIndex: 1, symbol: ?getId@LegacyTelemetryEventPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@LegacyTelemetryEventPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 4, symbol: ?write@LegacyTelemetryEventPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream&) const;

    // vIndex: 8, symbol:
    // ?_read@LegacyTelemetryEventPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream&);

    // symbol: ??0LegacyTelemetryEventPacket@@QEAA@XZ
    MCAPI LegacyTelemetryEventPacket();

    // symbol:
    // ??0LegacyTelemetryEventPacket@@QEAA@AEBVPlayer@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI LegacyTelemetryEventPacket(class Player const&, std::string const&);

    // symbol: ??0LegacyTelemetryEventPacket@@QEAA@PEBVPlayer@@V?$AutomaticID@VDimension@@H@@@Z
    MCAPI LegacyTelemetryEventPacket(class Player const*, DimensionType);

    // symbol: ??0LegacyTelemetryEventPacket@@QEAA@PEBVPlayer@@V?$not_null@PEBVMob@@@gsl@@@Z
    MCAPI LegacyTelemetryEventPacket(class Player const*, gsl::not_null<class Mob const*>);

    // symbol: ??0LegacyTelemetryEventPacket@@QEAA@PEBVPlayer@@AEBUData@0@@Z
    MCAPI LegacyTelemetryEventPacket(class Player const*, struct LegacyTelemetryEventPacket::Data const&);

    // symbol:
    // ??0LegacyTelemetryEventPacket@@QEAA@AEBVPlayer@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI LegacyTelemetryEventPacket(class Player const&, std::string const&, int);

    // symbol: ??0LegacyTelemetryEventPacket@@QEAA@PEBVPlayer@@V?$AutomaticID@VDimension@@H@@1@Z
    MCAPI LegacyTelemetryEventPacket(class Player const*, DimensionType, DimensionType);

    // symbol: ??0LegacyTelemetryEventPacket@@QEAA@PEBVPlayer@@AEBVRaid@@_N@Z
    MCAPI LegacyTelemetryEventPacket(class Player const*, class Raid const&, bool);

    // symbol:
    // ??0LegacyTelemetryEventPacket@@QEAA@PEBVPlayer@@V?$not_null@PEBVActor@@@gsl@@W4InteractionType@MinecraftEventing@@@Z
    MCAPI LegacyTelemetryEventPacket(
        class Player const*,
        gsl::not_null<class Actor const*>,
        ::MinecraftEventing::InteractionType
    );

    // symbol: ??0LegacyTelemetryEventPacket@@QEAA@PEBVPlayer@@W4AchievementIds@MinecraftEventing@@_N@Z
    MCAPI LegacyTelemetryEventPacket(class Player const*, ::MinecraftEventing::AchievementIds, bool);

    // symbol: ??0LegacyTelemetryEventPacket@@QEAA@PEBVPlayer@@HV?$not_null@PEBVActor@@@gsl@@@Z
    MCAPI LegacyTelemetryEventPacket(class Player const*, int, gsl::not_null<class Actor const*>);

    // symbol: ??0LegacyTelemetryEventPacket@@QEAA@PEBVPlayer@@FIF@Z
    MCAPI LegacyTelemetryEventPacket(class Player const*, short, uint, short);

    // symbol:
    // ??0LegacyTelemetryEventPacket@@QEAA@PEBVPlayer@@PEBVActor@@V?$not_null@PEBVMob@@@gsl@@W4ActorDamageCause@@W4ActorType@@@Z
    MCAPI LegacyTelemetryEventPacket(
        class Player const*,
        class Actor const*,
        gsl::not_null<class Mob const*>,
        ::ActorDamageCause,
        ::ActorType
    );

    // symbol:
    // ??0LegacyTelemetryEventPacket@@QEAA@PEBVPlayer@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HH1@Z
    MCAPI LegacyTelemetryEventPacket(class Player const*, std::string const&, int, int, std::string const&);

    // symbol: ??0LegacyTelemetryEventPacket@@QEAA@PEBVPlayer@@HHW4ActorDamageCause@@_N@Z
    MCAPI LegacyTelemetryEventPacket(class Player const*, int, int, ::ActorDamageCause, bool);

    // symbol:
    // ??0LegacyTelemetryEventPacket@@QEAA@PEBVPlayer@@PEBVActor@@V?$not_null@PEBVMob@@@gsl@@W4ActorDamageCause@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HW4ActorType@@@Z
    MCAPI LegacyTelemetryEventPacket(
        class Player const*,
        class Actor const*,
        gsl::not_null<class Mob const*>,
        ::ActorDamageCause,
        std::string,
        int,
        ::ActorType
    );

    // symbol: ??4LegacyTelemetryEventPacket@@QEAAAEAV0@$$QEAV0@@Z
    MCAPI class LegacyTelemetryEventPacket& operator=(class LegacyTelemetryEventPacket&&);

    // NOLINTEND
};
