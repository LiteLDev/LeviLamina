#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/events/MinecraftEventing.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/world/actor/ActorType.h"

struct LegacyTelemetryEventPacketPayload {
public:
    // LegacyTelemetryEventPacketPayload inner types declare
    // clang-format off
    struct Achievement;
    struct ActorDefinition;
    struct BellUsed;
    struct BossKilled;
    struct CauldronUsed;
    struct CodeBuilderRuntimeAction;
    struct CodeBuilderScoreboard;
    struct ComposterUsed;
    struct Empty;
    struct Interaction;
    struct ItemUsed;
    struct MobBorn;
    struct MobKilled;
    struct POICauldronUsed;
    struct PiglinBarter;
    struct PlayerDied;
    struct PlayerWaxedOrUnwaxedCopper;
    struct PortalCreated;
    struct PortalUsed;
    struct RaidUpdate;
    struct SlashCommand;
    struct TargetBlockHit;
    // clang-format on

    // LegacyTelemetryEventPacketPayload inner types define
    enum class Type : int {
        Achievement                     = 0,
        Interaction                     = 1,
        PortalCreated                   = 2,
        PortalUsed                      = 3,
        MobKilled                       = 4,
        CauldronUsed                    = 5,
        PlayerDied                      = 6,
        BossKilled                      = 7,
        AgentCommandObsolete            = 8,
        AgentCreated                    = 9,
        PatternRemovedObsolete          = 10,
        SlashCommand                    = 11,
        FishBucketedObsolete            = 12,
        MobBorn                         = 13,
        PetDiedObsolete                 = 14,
        POICauldronUsed                 = 15,
        ComposterUsed                   = 16,
        BellUsed                        = 17,
        ActorDefinition                 = 18,
        RaidUpdate                      = 19,
        PlayerMovementAnomalyObsolete   = 20,
        PlayerMovementCorrectedObsolete = 21,
        HoneyHarvested                  = 22,
        TargetBlockHit                  = 23,
        PiglinBarter                    = 24,
        PlayerWaxedOrUnwaxedCopper      = 25,
        CodeBuilderRuntimeAction        = 26,
        CodeBuilderScoreboard           = 27,
        StriderRiddenInLavaInOverworld  = 28,
        SneakCloseToSculkSensor         = 29,
        CarefulRestoration              = 30,
        ItemUsed                        = 31,
    };

    struct Achievement {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, ::MinecraftEventing::AchievementIds> mAchievementId;
        // NOLINTEND
    };

    struct ActorDefinition {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::std::string> mEventName;
        // NOLINTEND

    public:
        // prevent constructor by default
        ActorDefinition(ActorDefinition const&);
        ActorDefinition();

    public:
        // member functions
        // NOLINTBEGIN
        MCFOLD ::LegacyTelemetryEventPacketPayload::ActorDefinition&
        operator=(::LegacyTelemetryEventPacketPayload::ActorDefinition&&);

        MCFOLD ::LegacyTelemetryEventPacketPayload::ActorDefinition&
        operator=(::LegacyTelemetryEventPacketPayload::ActorDefinition const&);

        MCAPI ~ActorDefinition();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCFOLD void $dtor();
        // NOLINTEND
    };

    struct BellUsed {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<2, 2, short> mItemId;
        // NOLINTEND
    };

    struct BossKilled {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, int>   mPartySize;
        ::ll::TypedStorage<8, 8, int64> mBossUniqueId;
        ::ll::TypedStorage<4, 4, int>   mBossType;
        // NOLINTEND
    };

    struct CauldronUsed {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<2, 2, short> mContentsType;
        ::ll::TypedStorage<4, 4, uint>  mContentsColor;
        ::ll::TypedStorage<2, 2, short> mFillLevel;
        // NOLINTEND
    };

    struct CodeBuilderRuntimeAction {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::std::string> mRuntimeAction;
        // NOLINTEND

    public:
        // prevent constructor by default
        CodeBuilderRuntimeAction(CodeBuilderRuntimeAction const&);
        CodeBuilderRuntimeAction();

    public:
        // member functions
        // NOLINTBEGIN
        MCFOLD ::LegacyTelemetryEventPacketPayload::CodeBuilderRuntimeAction&
        operator=(::LegacyTelemetryEventPacketPayload::CodeBuilderRuntimeAction&&);

        MCFOLD ::LegacyTelemetryEventPacketPayload::CodeBuilderRuntimeAction&
        operator=(::LegacyTelemetryEventPacketPayload::CodeBuilderRuntimeAction const&);

        MCAPI ~CodeBuilderRuntimeAction();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCFOLD void $dtor();
        // NOLINTEND
    };

    struct CodeBuilderScoreboard {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::std::string> mObjectiveName;
        ::ll::TypedStorage<4, 4, int>            mScore;
        // NOLINTEND

    public:
        // prevent constructor by default
        CodeBuilderScoreboard(CodeBuilderScoreboard const&);
        CodeBuilderScoreboard();

    public:
        // member functions
        // NOLINTBEGIN
        MCFOLD ::LegacyTelemetryEventPacketPayload::CodeBuilderScoreboard&
        operator=(::LegacyTelemetryEventPacketPayload::CodeBuilderScoreboard&&);

        MCFOLD ::LegacyTelemetryEventPacketPayload::CodeBuilderScoreboard&
        operator=(::LegacyTelemetryEventPacketPayload::CodeBuilderScoreboard const&);

        MCAPI ~CodeBuilderScoreboard();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCFOLD void $dtor();
        // NOLINTEND
    };

    struct ComposterUsed {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<2, 2, short>                                        mItemId;
        ::ll::TypedStorage<1, 1, ::MinecraftEventing::POIBlockInteractionType> mInteractionType;
        // NOLINTEND
    };

    struct Empty {};

    struct Interaction {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, int64>                                mInteractedEntityId;
        ::ll::TypedStorage<4, 4, int>                                  mInteractedEntityType;
        ::ll::TypedStorage<1, 1, ::MinecraftEventing::InteractionType> mInteractionType;
        ::ll::TypedStorage<4, 4, int>                                  mInteractedEntityVariant;
        ::ll::TypedStorage<1, 1, uchar>                                mInteractedEntityColor;
        // NOLINTEND
    };

    struct ItemUsed {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<2, 2, short> mItemId;
        ::ll::TypedStorage<4, 4, int>   mItemAux;
        ::ll::TypedStorage<4, 4, int>   mUseMethod;
        ::ll::TypedStorage<4, 4, int>   mCount;
        // NOLINTEND
    };

    struct MobBorn {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, int>   mBabyType;
        ::ll::TypedStorage<4, 4, int>   mBabyVariant;
        ::ll::TypedStorage<1, 1, uchar> mBabyColor;
        // NOLINTEND
    };

    struct MobKilled {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, int64>          mKillerEntityId;
        ::ll::TypedStorage<8, 8, int64>          mKilledMobId;
        ::ll::TypedStorage<4, 4, ::ActorType>    mDamageChildType;
        ::ll::TypedStorage<4, 4, int>            mDamageSource;
        ::ll::TypedStorage<4, 4, int>            mTraderTier;
        ::ll::TypedStorage<8, 32, ::std::string> mTraderName;
        // NOLINTEND

    public:
        // prevent constructor by default
        MobKilled(MobKilled const&);
        MobKilled();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ::LegacyTelemetryEventPacketPayload::MobKilled&
        operator=(::LegacyTelemetryEventPacketPayload::MobKilled&&);

        MCAPI ::LegacyTelemetryEventPacketPayload::MobKilled&
        operator=(::LegacyTelemetryEventPacketPayload::MobKilled const&);

        MCAPI ~MobKilled();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCFOLD void $dtor();
        // NOLINTEND
    };

    struct POICauldronUsed {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<2, 2, short>                                        mItemId;
        ::ll::TypedStorage<1, 1, ::MinecraftEventing::POIBlockInteractionType> mInteractionType;
        // NOLINTEND
    };

    struct PiglinBarter {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, int>  mItemId;
        ::ll::TypedStorage<1, 1, bool> mWasTargetingBarteringPlayer;
        // NOLINTEND
    };

    struct PlayerDied {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, int>  mKillerId;
        ::ll::TypedStorage<4, 4, int>  mKillerVariant;
        ::ll::TypedStorage<4, 4, int>  mDamageSource;
        ::ll::TypedStorage<1, 1, bool> mInRaid;
        // NOLINTEND
    };

    struct PlayerWaxedOrUnwaxedCopper {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, int> mBlockID;
        // NOLINTEND
    };

    struct PortalCreated {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, int> mBuiltInDimension;
        // NOLINTEND
    };

    struct PortalUsed {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, int> mFromDimension;
        ::ll::TypedStorage<4, 4, int> mToDimension;
        // NOLINTEND
    };

    struct RaidUpdate {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, int>  mCurrentWave;
        ::ll::TypedStorage<4, 4, int>  mTotalWaves;
        ::ll::TypedStorage<1, 1, bool> mSuccess;
        // NOLINTEND
    };

    struct SlashCommand {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::std::string> mCommandName;
        ::ll::TypedStorage<4, 4, int>            mSuccessCount;
        ::ll::TypedStorage<4, 4, int>            mErrorCount;
        ::ll::TypedStorage<8, 32, ::std::string> mErrorList;
        // NOLINTEND

    public:
        // prevent constructor by default
        SlashCommand(SlashCommand const&);
        SlashCommand();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ::LegacyTelemetryEventPacketPayload::SlashCommand&
        operator=(::LegacyTelemetryEventPacketPayload::SlashCommand&&);

        MCAPI ::LegacyTelemetryEventPacketPayload::SlashCommand&
        operator=(::LegacyTelemetryEventPacketPayload::SlashCommand const&);

        MCAPI bool operator==(::LegacyTelemetryEventPacketPayload::SlashCommand const&) const;

        MCAPI ~SlashCommand();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCFOLD void $dtor();
        // NOLINTEND
    };

    struct TargetBlockHit {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, int> mRedstoneLevel;
        // NOLINTEND
    };

    using EventData = ::std::variant<
        ::LegacyTelemetryEventPacketPayload::Achievement,
        ::LegacyTelemetryEventPacketPayload::Interaction,
        ::LegacyTelemetryEventPacketPayload::PortalCreated,
        ::LegacyTelemetryEventPacketPayload::PortalUsed,
        ::LegacyTelemetryEventPacketPayload::MobKilled,
        ::LegacyTelemetryEventPacketPayload::CauldronUsed,
        ::LegacyTelemetryEventPacketPayload::PlayerDied,
        ::LegacyTelemetryEventPacketPayload::BossKilled,
        ::LegacyTelemetryEventPacketPayload::SlashCommand,
        ::LegacyTelemetryEventPacketPayload::MobBorn,
        ::LegacyTelemetryEventPacketPayload::POICauldronUsed,
        ::LegacyTelemetryEventPacketPayload::ComposterUsed,
        ::LegacyTelemetryEventPacketPayload::BellUsed,
        ::LegacyTelemetryEventPacketPayload::ActorDefinition,
        ::LegacyTelemetryEventPacketPayload::RaidUpdate,
        ::LegacyTelemetryEventPacketPayload::TargetBlockHit,
        ::LegacyTelemetryEventPacketPayload::PiglinBarter,
        ::LegacyTelemetryEventPacketPayload::PlayerWaxedOrUnwaxedCopper,
        ::LegacyTelemetryEventPacketPayload::CodeBuilderRuntimeAction,
        ::LegacyTelemetryEventPacketPayload::CodeBuilderScoreboard,
        ::LegacyTelemetryEventPacketPayload::ItemUsed,
        ::LegacyTelemetryEventPacketPayload::Empty>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                           mPlayerUniqueId;
    ::ll::TypedStorage<4, 4, ::LegacyTelemetryEventPacketPayload::Type> mType;
    ::ll::TypedStorage<1, 1, bool>                                      mUsePlayerID;
    ::ll::TypedStorage<
        8,
        80,
        ::std::variant<
            ::LegacyTelemetryEventPacketPayload::Achievement,
            ::LegacyTelemetryEventPacketPayload::Interaction,
            ::LegacyTelemetryEventPacketPayload::PortalCreated,
            ::LegacyTelemetryEventPacketPayload::PortalUsed,
            ::LegacyTelemetryEventPacketPayload::MobKilled,
            ::LegacyTelemetryEventPacketPayload::CauldronUsed,
            ::LegacyTelemetryEventPacketPayload::PlayerDied,
            ::LegacyTelemetryEventPacketPayload::BossKilled,
            ::LegacyTelemetryEventPacketPayload::SlashCommand,
            ::LegacyTelemetryEventPacketPayload::MobBorn,
            ::LegacyTelemetryEventPacketPayload::POICauldronUsed,
            ::LegacyTelemetryEventPacketPayload::ComposterUsed,
            ::LegacyTelemetryEventPacketPayload::BellUsed,
            ::LegacyTelemetryEventPacketPayload::ActorDefinition,
            ::LegacyTelemetryEventPacketPayload::RaidUpdate,
            ::LegacyTelemetryEventPacketPayload::TargetBlockHit,
            ::LegacyTelemetryEventPacketPayload::PiglinBarter,
            ::LegacyTelemetryEventPacketPayload::PlayerWaxedOrUnwaxedCopper,
            ::LegacyTelemetryEventPacketPayload::CodeBuilderRuntimeAction,
            ::LegacyTelemetryEventPacketPayload::CodeBuilderScoreboard,
            ::LegacyTelemetryEventPacketPayload::ItemUsed,
            ::LegacyTelemetryEventPacketPayload::Empty>>
        mEventData;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~LegacyTelemetryEventPacketPayload();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
