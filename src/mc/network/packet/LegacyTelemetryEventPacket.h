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
#include "mc/world/item/components/ItemUseMethod.h"

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
        AgentCommand_Obsolete            = 0x8,
        AgentCreated                     = 0x9,
        PatternRemoved_Obsolete          = 0xA,
        SlashCommand                     = 0xB,
        Deprecated_FishBucketed          = 0xC,
        MobBorn                          = 0xD,
        PetDied_Obsolete                 = 0xE,
        POICauldronUsed                  = 0xF,
        ComposterUsed                    = 0x10,
        BellUsed                         = 0x11,
        ActorDefinition                  = 0x12,
        RaidUpdate                       = 0x13,
        PlayerMovementAnomaly_Obsolete   = 0x14,
        PlayerMovementCorrected_Obsolete = 0x15,
        HoneyHarvested                   = 0x16,
        TargetBlockHit                   = 0x17,
        PiglinBarter                     = 0x18,
        PlayerWaxedOrUnwaxedCopper       = 0x19,
        CodeBuilderRuntimeAction         = 0x1A,
        CodeBuilderScoreboard            = 0x1B,
        StriderRiddenInLavaInOverworld   = 0x1C,
        SneakCloseToSculkSensor          = 0x1D,
        CarefulRestoration               = 0x1E,
        ItemUsedEvent                    = 0x1F
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
        MCAPI Data();

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
    // vIndex: 0
    virtual ~LegacyTelemetryEventPacket();

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream&) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream&);

    MCAPI LegacyTelemetryEventPacket();

    MCAPI LegacyTelemetryEventPacket(class Player const&, std::string const&);

    MCAPI LegacyTelemetryEventPacket(class Player const*, DimensionType);

    MCAPI LegacyTelemetryEventPacket(class Player const*, gsl::not_null<class Mob const*>);

    MCAPI LegacyTelemetryEventPacket(class Player const*, struct LegacyTelemetryEventPacket::Data const&);

    MCAPI LegacyTelemetryEventPacket(class Player const&, std::string const&, int);

    MCAPI LegacyTelemetryEventPacket(class Player const*, DimensionType, DimensionType);

    MCAPI LegacyTelemetryEventPacket(class Player const*, class Raid const&, bool);

    MCAPI LegacyTelemetryEventPacket(
        class Player const*,
        gsl::not_null<class Actor const*>,
        ::MinecraftEventing::InteractionType
    );

    MCAPI LegacyTelemetryEventPacket(class Player const*, ::MinecraftEventing::AchievementIds, bool);

    MCAPI LegacyTelemetryEventPacket(class Player const*, int, gsl::not_null<class Actor const*>);

    MCAPI LegacyTelemetryEventPacket(class Player const&, class ItemStackBase const&, ::ItemUseMethod, int);

    MCAPI LegacyTelemetryEventPacket(class Player const*, short, uint, short);

    MCAPI LegacyTelemetryEventPacket(
        class Player const*,
        class Actor const*,
        gsl::not_null<class Mob const*>,
        ::ActorDamageCause,
        ::ActorType
    );

    MCAPI LegacyTelemetryEventPacket(class Player const*, std::string const&, int, int, std::string const&);

    MCAPI LegacyTelemetryEventPacket(class Player const*, int, int, ::ActorDamageCause, bool);

    MCAPI LegacyTelemetryEventPacket(
        class Player const*,
        class Actor const*,
        gsl::not_null<class Mob const*>,
        ::ActorDamageCause,
        std::string,
        int,
        ::ActorType
    );

    MCAPI class LegacyTelemetryEventPacket& operator=(class LegacyTelemetryEventPacket&&);

    // NOLINTEND
};
