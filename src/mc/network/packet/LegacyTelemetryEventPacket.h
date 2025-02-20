#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/deps/shared_types/legacy/actor/ActorDamageCause.h"
#include "mc/events/MinecraftEventing.h"
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
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
struct ActorUniqueID;
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
                ::ll::UntypedStorage<4, 4> mUnkdb4be3;
            } Achievement;
            struct {
                ::ll::UntypedStorage<8, 8> mUnkb274d3;
                ::ll::UntypedStorage<4, 4> mUnkbb6585;
                ::ll::UntypedStorage<4, 4> mUnk55e0e4;
                ::ll::UntypedStorage<4, 4> mUnk99deb4;
                ::ll::UntypedStorage<1, 1> mUnk1f638a;
            } Interaction;
            struct {
                ::ll::UntypedStorage<4, 4> mUnk5b8083;
            } PortalCreated;
            struct {
                ::ll::UntypedStorage<4, 4> mUnkb9fbc9;
                ::ll::UntypedStorage<4, 4> mUnk43c3ff;
            } PortalUsed;
            struct {
                ::ll::UntypedStorage<8, 8> mUnk9a2c1e;
                ::ll::UntypedStorage<8, 8> mUnk3e0977;
                ::ll::UntypedStorage<4, 4> mUnk8eff09;
                ::ll::UntypedStorage<4, 4> mUnk680d77;
                ::ll::UntypedStorage<4, 4> mUnkfbdd6e;
            } MobKilled;
            struct {
                ::ll::UntypedStorage<2, 2> mUnkbcdce3;
                ::ll::UntypedStorage<4, 4> mUnk3a1996;
                ::ll::UntypedStorage<2, 2> mUnkc523de;
            } CauldronUsed;
            struct {
                ::ll::UntypedStorage<4, 4> mUnk874988;
                ::ll::UntypedStorage<4, 4> mUnk8f020b;
                ::ll::UntypedStorage<4, 4> mUnkea1370;
                ::ll::UntypedStorage<1, 1> mUnk7082cc;
            } PlayerDied;
            struct {
                ::ll::UntypedStorage<4, 4> mUnk5caf87;
                ::ll::UntypedStorage<8, 8> mUnk10731e;
                ::ll::UntypedStorage<4, 4> mUnkd9ef6c;
            } BossKilled;
            struct {
                ::ll::UntypedStorage<4, 4> mUnkc66542;
                ::ll::UntypedStorage<4, 4> mUnk13a5ca;
            } AgentCommand;
            struct {
                ::ll::UntypedStorage<4, 4> mUnk49f527;
                ::ll::UntypedStorage<4, 4> mUnkc99546;
            } SlashCommand;
            struct {
                ::ll::UntypedStorage<4, 4> mUnk4f57ec;
                ::ll::UntypedStorage<4, 4> mUnkbbbeb6;
                ::ll::UntypedStorage<1, 1> mUnk3bb98f;
            } MobBorn;
            struct {
                ::ll::UntypedStorage<2, 2> mUnk24c1fa;
                ::ll::UntypedStorage<4, 4> mUnk4aef55;
            } POICauldronUsed;
            struct {
                ::ll::UntypedStorage<2, 2> mUnk7119ba;
                ::ll::UntypedStorage<4, 4> mUnk762659;
            } ComposterUsed;
            struct {
                ::ll::UntypedStorage<2, 2> mUnk20ab2e;
            } BellUsed;
            struct {
                ::ll::UntypedStorage<4, 4> mUnk2d4fb9;
                ::ll::UntypedStorage<4, 4> mUnk13af5c;
                ::ll::UntypedStorage<1, 1> mUnk2fa508;
            } RaidUpdate;
            struct {
                ::ll::UntypedStorage<4, 4> mUnk7e052c;
            } TargetBlockHit;
            struct {
                ::ll::UntypedStorage<4, 4> mUnkd2152b;
                ::ll::UntypedStorage<1, 1> mUnkd18694;
            } PiglinBarter;
            struct {
                ::ll::UntypedStorage<4, 4> mUnkee799b;
            } PlayerWaxedOrUnwaxedCopper;
            struct {
                ::ll::UntypedStorage<4, 4> mUnke2ed2e;
            } CodeBuilderScoreboard;
            struct {
                ::ll::UntypedStorage<2, 2> mUnk5e4d71;
                ::ll::UntypedStorage<4, 4> mUnkc09cc4;
                ::ll::UntypedStorage<4, 4> mUnk5c7bb4;
                ::ll::UntypedStorage<4, 4> mUnk7bb7ce;
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

    // vIndex: 4
    virtual void write(::BinaryStream& stream) const /*override*/;

    // vIndex: 8
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
        ::ItemUseMethod        useCount,
        int                    useMethod
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

    MCAPI void* $ctor(::Player const& player, ::ItemStackBase const& item, ::ItemUseMethod useCount, int useMethod);

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
    MCAPI static void** $vftable();
    // NOLINTEND
};
