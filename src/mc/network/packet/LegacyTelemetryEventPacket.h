#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/rendergraph/Packet.h"
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/deps/shared_types/legacy/actor/ActorDamageCause.h"
#include "mc/events/MinecraftEventing.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/network/MinecraftPacketIds.h"
#include "mc/platform/Result.h"
#include "mc/world/actor/ActorType.h"
#include "mc/world/item/ItemUseMethod.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BinaryStream;
class Dimension;
class ItemStackBase;
class Mob;
class Player;
class Raid;
class ReadOnlyBinaryStream;
// clang-format on

class LegacyTelemetryEventPacket : public ::Packet {
public:
    // LegacyTelemetryEventPacket inner types declare
    // clang-format off
    struct Data;
    // clang-format on

    // LegacyTelemetryEventPacket inner types define
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
        DeprecatedFishBucketed          = 12,
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
        ItemUsedEvent                   = 31,
    };

    enum class AgentResult : int {
        ActionFail       = 0,
        ActionSuccess    = 1,
        QueryResultFalse = 2,
        QueryResultTrue  = 3,
    };

    struct Data {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, ::LegacyTelemetryEventPacket::Type> mType;
        ::ll::TypedStorage<1, 1, uchar>                              mUsePlayerID;
        union {
            struct {
                ::ll::TypedStorage<4, 4, ::MinecraftEventing::AchievementIds> mAchievementId;
            } Achievement;
            struct {
                ::ll::TypedStorage<8, 8, int64>                                mInteractedEntityId;
                ::ll::TypedStorage<4, 4, int>                                  mInteractedEntityType;
                ::ll::TypedStorage<4, 4, ::MinecraftEventing::InteractionType> mInteractionType;
                ::ll::TypedStorage<4, 4, int>                                  mInteractedEntityVariant;
                ::ll::TypedStorage<1, 1, uchar>                                mInteractedEntityColor;
            } Interaction;
            struct {
                ::ll::TypedStorage<4, 4, int> mBuiltInDimension;
            } PortalCreated;
            struct {
                ::ll::TypedStorage<4, 4, int> mFromDimension;
                ::ll::TypedStorage<4, 4, int> mToDimension;
            } PortalUsed;
            struct {
                ::ll::TypedStorage<8, 8, int64>       mKillerEntityId;
                ::ll::TypedStorage<8, 8, int64>       mKilledMobId;
                ::ll::TypedStorage<4, 4, ::ActorType> mDamageChildType;
                ::ll::TypedStorage<4, 4, int>         mDamageSource;
                ::ll::TypedStorage<4, 4, int>         mTraderTier;
            } MobKilled;
            struct {
                ::ll::TypedStorage<2, 2, short> mContentsType;
                ::ll::TypedStorage<4, 4, uint>  mContentsColor;
                ::ll::TypedStorage<2, 2, short> mFillLevel;
            } CauldronUsed;
            struct {
                ::ll::TypedStorage<4, 4, int>  mKillerId;
                ::ll::TypedStorage<4, 4, int>  mKillerVariant;
                ::ll::TypedStorage<4, 4, int>  mDamageSource;
                ::ll::TypedStorage<1, 1, bool> mInRaid;
            } PlayerDied;
            struct {
                ::ll::TypedStorage<4, 4, int>   mPartySize;
                ::ll::TypedStorage<8, 8, int64> mBossUniqueId;
                ::ll::TypedStorage<4, 4, int>   mBossType;
            } BossKilled;
            struct {
                ::ll::TypedStorage<4, 4, int> mResult;
                ::ll::TypedStorage<4, 4, int> mResultNumber;
            } AgentCommand;
            struct {
                ::ll::TypedStorage<4, 4, int> mSuccessCount;
                ::ll::TypedStorage<4, 4, int> mErrorCount;
            } SlashCommand;
            struct {
                ::ll::TypedStorage<4, 4, int>   mBabyType;
                ::ll::TypedStorage<4, 4, int>   mBabyVariant;
                ::ll::TypedStorage<1, 1, uchar> mBabyColor;
            } MobBorn;
            struct {
                ::ll::TypedStorage<2, 2, short>                                        mItemId;
                ::ll::TypedStorage<4, 4, ::MinecraftEventing::POIBlockInteractionType> mInteractionType;
            } POICauldronUsed;
            struct {
                ::ll::TypedStorage<2, 2, short>                                        mItemId;
                ::ll::TypedStorage<4, 4, ::MinecraftEventing::POIBlockInteractionType> mInteractionType;
            } ComposterUsed;
            struct {
                ::ll::TypedStorage<2, 2, short> mItemId;
            } BellUsed;
            struct {
                ::ll::TypedStorage<4, 4, int>  mCurrentWave;
                ::ll::TypedStorage<4, 4, int>  mTotalWaves;
                ::ll::TypedStorage<1, 1, bool> mSuccess;
            } RaidUpdate;
            struct {
                ::ll::TypedStorage<4, 4, int> mRedstoneLevel;
            } TargetBlockHit;
            struct {
                ::ll::TypedStorage<4, 4, int>  mItemId;
                ::ll::TypedStorage<1, 1, bool> mWasTargetingBarteringPlayer;
            } PiglinBarter;
            struct {
                ::ll::TypedStorage<4, 4, int> mBlockID;
            } PlayerWaxedOrUnwaxedCopper;
            struct {
                ::ll::TypedStorage<4, 4, int> score;
            } CodeBuilderScoreboard;
            struct {
                ::ll::TypedStorage<2, 2, short> mItemId;
                ::ll::TypedStorage<4, 4, int>   mItemAux;
                ::ll::TypedStorage<4, 4, int>   mUseMethod;
                ::ll::TypedStorage<4, 4, int>   mCount;
            } ItemUsedEvent;
        };
        ::ll::TypedStorage<8, 32, ::std::string> mEntityName;
        ::ll::TypedStorage<8, 32, ::std::string> mCommandName;
        ::ll::TypedStorage<8, 32, ::std::string> mResultKey;
        ::ll::TypedStorage<8, 32, ::std::string> mResultString;
        ::ll::TypedStorage<8, 32, ::std::string> mErrorList;
        ::ll::TypedStorage<8, 32, ::std::string> mObjectiveName;
        ::ll::TypedStorage<8, 32, ::std::string> mCodeBuilderRuntimeAction;
        // NOLINTEND

    public:
        // prevent constructor by default
        Data& operator=(Data const&);
        Data(Data const&);

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI Data();

        MCAPI ::LegacyTelemetryEventPacket::Data& operator=(::LegacyTelemetryEventPacket::Data&&);

        MCAPI ~Data();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void* $ctor();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                      mPlayerId;
    ::ll::TypedStorage<8, 264, ::LegacyTelemetryEventPacket::Data> mEventData;
    // NOLINTEND

public:
    // prevent constructor by default
    LegacyTelemetryEventPacket& operator=(LegacyTelemetryEventPacket const&);
    LegacyTelemetryEventPacket(LegacyTelemetryEventPacket const&);

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const /*override*/;

    // vIndex: 2
    virtual ::std::string getName() const /*override*/;

    // vIndex: 5
    virtual void write(::BinaryStream& stream) const /*override*/;

    // vIndex: 13
    virtual ::Bedrock::Result<void> _read(::ReadOnlyBinaryStream& stream) /*override*/;

    // vIndex: 0
    virtual ~LegacyTelemetryEventPacket() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI LegacyTelemetryEventPacket();

    MCAPI LegacyTelemetryEventPacket(::Player const* player, ::gsl::not_null<::Mob const*> baby);

    MCAPI LegacyTelemetryEventPacket(::Player const& player, ::std::string const& codebuilderRuntimeAction);

    MCAPI LegacyTelemetryEventPacket(::Player const* player, ::LegacyTelemetryEventPacket::Data const& data);

    MCAPI LegacyTelemetryEventPacket(::Player const* player, ::DimensionType portalBuiltInDimension);

    MCAPI LegacyTelemetryEventPacket(
        ::Player const*                     player,
        ::MinecraftEventing::AchievementIds achievementId,
        bool                                usePlayerID
    );

    MCAPI
    LegacyTelemetryEventPacket(::Player const* player, ::DimensionType fromDimension, ::DimensionType toDimension);

    MCAPI LegacyTelemetryEventPacket(
        ::Player const*                      player,
        ::gsl::not_null<::Actor const*>      interactedEntity,
        ::MinecraftEventing::InteractionType interactionType
    );

    MCAPI LegacyTelemetryEventPacket(::Player const& player, ::std::string const& objective, int score);

    MCAPI LegacyTelemetryEventPacket(::Player const* player, int partySize, ::gsl::not_null<::Actor const*> e);

    MCAPI LegacyTelemetryEventPacket(::Player const* player, ::Raid const& raid, bool success);

    MCAPI LegacyTelemetryEventPacket(::Player const* player, short contentsType, uint contentsColor, short fillLevel);

    MCAPI LegacyTelemetryEventPacket(
        ::Player const&        player,
        ::ItemStackBase const& item,
        ::ItemUseMethod        useMethod,
        int                    useCount
    );

    MCAPI LegacyTelemetryEventPacket(
        ::Player const*      player,
        ::std::string const& commandName,
        int                  successCount,
        int                  errorCount,
        ::std::string const& errorList
    );

    MCAPI LegacyTelemetryEventPacket(
        ::Player const*                         player,
        ::Actor const*                          killerEntity,
        ::ActorUniqueID const&                  killedMobID,
        ::SharedTypes::Legacy::ActorDamageCause cause,
        ::ActorType                             damageChildType
    );

    MCAPI LegacyTelemetryEventPacket(
        ::Player const*                         player,
        int                                     killerId,
        int                                     killerVariant,
        ::SharedTypes::Legacy::ActorDamageCause cause,
        bool                                    inRaid
    );

    MCAPI LegacyTelemetryEventPacket(
        ::Player const*                         player,
        ::Actor const*                          killerEntity,
        ::ActorUniqueID const&                  killedMobID,
        ::SharedTypes::Legacy::ActorDamageCause cause,
        ::std::string                           traderName,
        int                                     traderTier,
        ::ActorType                             damageChildType
    );

    MCAPI ::LegacyTelemetryEventPacket& operator=(::LegacyTelemetryEventPacket&&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::Player const* player, ::gsl::not_null<::Mob const*> baby);

    MCAPI void* $ctor(::Player const& player, ::std::string const& codebuilderRuntimeAction);

    MCAPI void* $ctor(::Player const* player, ::LegacyTelemetryEventPacket::Data const& data);

    MCAPI void* $ctor(::Player const* player, ::DimensionType portalBuiltInDimension);

    MCAPI void* $ctor(::Player const* player, ::MinecraftEventing::AchievementIds achievementId, bool usePlayerID);

    MCAPI void* $ctor(::Player const* player, ::DimensionType fromDimension, ::DimensionType toDimension);

    MCAPI void* $ctor(
        ::Player const*                      player,
        ::gsl::not_null<::Actor const*>      interactedEntity,
        ::MinecraftEventing::InteractionType interactionType
    );

    MCAPI void* $ctor(::Player const& player, ::std::string const& objective, int score);

    MCAPI void* $ctor(::Player const* player, int partySize, ::gsl::not_null<::Actor const*> e);

    MCAPI void* $ctor(::Player const* player, ::Raid const& raid, bool success);

    MCAPI void* $ctor(::Player const* player, short contentsType, uint contentsColor, short fillLevel);

    MCAPI void* $ctor(::Player const& player, ::ItemStackBase const& item, ::ItemUseMethod useMethod, int useCount);

    MCAPI void* $ctor(
        ::Player const*      player,
        ::std::string const& commandName,
        int                  successCount,
        int                  errorCount,
        ::std::string const& errorList
    );

    MCAPI void* $ctor(
        ::Player const*                         player,
        ::Actor const*                          killerEntity,
        ::ActorUniqueID const&                  killedMobID,
        ::SharedTypes::Legacy::ActorDamageCause cause,
        ::ActorType                             damageChildType
    );

    MCAPI void* $ctor(
        ::Player const*                         player,
        int                                     killerId,
        int                                     killerVariant,
        ::SharedTypes::Legacy::ActorDamageCause cause,
        bool                                    inRaid
    );

    MCAPI void* $ctor(
        ::Player const*                         player,
        ::Actor const*                          killerEntity,
        ::ActorUniqueID const&                  killedMobID,
        ::SharedTypes::Legacy::ActorDamageCause cause,
        ::std::string                           traderName,
        int                                     traderTier,
        ::ActorType                             damageChildType
    );
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

    MCAPI ::Bedrock::Result<void> $_read(::ReadOnlyBinaryStream& stream);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
