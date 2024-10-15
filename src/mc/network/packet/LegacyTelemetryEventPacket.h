#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/events/MinecraftEventing.h"
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/platform/Result.h"
#include "mc/world/actor/ActorDamageCause.h"
#include "mc/world/actor/ActorType.h"
#include "mc/world/item/ItemUseMethod.h"

class LegacyTelemetryEventPacket : public ::Packet {
public:
    // LegacyTelemetryEventPacket inner types declare
    // clang-format off
    struct Data;
    // clang-format on

    // LegacyTelemetryEventPacket inner types define
    enum class Type {};

    struct Data {
    public:
        // prevent constructor by default
        Data& operator=(Data const&);
        Data(Data const&);

    public:
        // NOLINTBEGIN
        MCAPI Data();

        MCAPI ~Data();

        // NOLINTEND

        // thunks
    public:
        // NOLINTBEGIN
        MCAPI void* ctor$();

        MCAPI void dtor$();

        // NOLINTEND
    };

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
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI LegacyTelemetryEventPacket();

    MCAPI LegacyTelemetryEventPacket(class Player const& player, std::string const& codebuilderRuntimeAction);

    MCAPI LegacyTelemetryEventPacket(class Player const* player, DimensionType portalBuiltInDimension);

    MCAPI LegacyTelemetryEventPacket(class Player const* player, gsl::not_null<class Mob const*> baby);

    MCAPI LegacyTelemetryEventPacket(class Player const* player, struct LegacyTelemetryEventPacket::Data const& data);

    MCAPI LegacyTelemetryEventPacket(class Player const& player, std::string const& objective, int score);

    MCAPI
    LegacyTelemetryEventPacket(class Player const* player, DimensionType fromDimension, DimensionType toDimension);

    MCAPI LegacyTelemetryEventPacket(class Player const* player, class Raid const& raid, bool success);

    MCAPI LegacyTelemetryEventPacket(
        class Player const*                  player,
        gsl::not_null<class Actor const*>    interactedEntity,
        ::MinecraftEventing::InteractionType interactionType
    );

    MCAPI LegacyTelemetryEventPacket(
        class Player const*                 player,
        ::MinecraftEventing::AchievementIds achievementId,
        bool                                usePlayerID
    );

    MCAPI LegacyTelemetryEventPacket(class Player const* player, int partySize, gsl::not_null<class Actor const*> e);

    MCAPI LegacyTelemetryEventPacket(
        class Player const&        player,
        class ItemStackBase const& item,
        ::ItemUseMethod            useMethod,
        int                        useCount
    );

    MCAPI
    LegacyTelemetryEventPacket(class Player const* player, short contentsType, uint contentsColor, short fillLevel);

    MCAPI LegacyTelemetryEventPacket(
        class Player const*             player,
        class Actor const*              killerEntity,
        gsl::not_null<class Mob const*> killedMob,
        ::ActorDamageCause              cause,
        ::ActorType                     damageChildType
    );

    MCAPI LegacyTelemetryEventPacket(
        class Player const* player,
        std::string const&  commandName,
        int                 successCount,
        int                 errorCount,
        std::string const&  errorList
    );

    MCAPI LegacyTelemetryEventPacket(
        class Player const* player,
        int                 killerId,
        int                 killerVariant,
        ::ActorDamageCause  cause,
        bool                inRaid
    );

    MCAPI LegacyTelemetryEventPacket(
        class Player const*             player,
        class Actor const*              killerEntity,
        gsl::not_null<class Mob const*> killedMob,
        ::ActorDamageCause              cause,
        std::string                     traderName,
        int                             traderTier,
        ::ActorType                     damageChildType
    );

    MCAPI class LegacyTelemetryEventPacket& operator=(class LegacyTelemetryEventPacket&&);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$(class Player const* player, ::MinecraftEventing::AchievementIds achievementId, bool usePlayerID);

    MCAPI void* ctor$(class Player const* player, int partySize, gsl::not_null<class Actor const*> e);

    MCAPI void*
    ctor$(class Player const& player, class ItemStackBase const& item, ::ItemUseMethod useMethod, int useCount);

    MCAPI void* ctor$(class Player const& player, std::string const& objective, int score);

    MCAPI void* ctor$(class Player const* player, short contentsType, uint contentsColor, short fillLevel);

    MCAPI void* ctor$(
        class Player const* player,
        std::string const&  commandName,
        int                 successCount,
        int                 errorCount,
        std::string const&  errorList
    );

    MCAPI void* ctor$(class Player const* player, struct LegacyTelemetryEventPacket::Data const& data);

    MCAPI void* ctor$(class Player const* player, gsl::not_null<class Mob const*> baby);

    MCAPI void* ctor$(class Player const* player, class Raid const& raid, bool success);

    MCAPI void* ctor$(
        class Player const*             player,
        class Actor const*              killerEntity,
        gsl::not_null<class Mob const*> killedMob,
        ::ActorDamageCause              cause,
        std::string                     traderName,
        int                             traderTier,
        ::ActorType                     damageChildType
    );

    MCAPI void* ctor$(
        class Player const*                  player,
        gsl::not_null<class Actor const*>    interactedEntity,
        ::MinecraftEventing::InteractionType interactionType
    );

    MCAPI void* ctor$();

    MCAPI void* ctor$(class Player const* player, DimensionType portalBuiltInDimension);

    MCAPI void* ctor$(class Player const& player, std::string const& codebuilderRuntimeAction);

    MCAPI void* ctor$(class Player const* player, DimensionType fromDimension, DimensionType toDimension);

    MCAPI void* ctor$(
        class Player const*             player,
        class Actor const*              killerEntity,
        gsl::not_null<class Mob const*> killedMob,
        ::ActorDamageCause              cause,
        ::ActorType                     damageChildType
    );

    MCAPI void*
    ctor$(class Player const* player, int killerId, int killerVariant, ::ActorDamageCause cause, bool inRaid);

    MCAPI void dtor$();

    MCAPI class Bedrock::Result<void> _read$(class ReadOnlyBinaryStream& stream);

    MCAPI ::MinecraftPacketIds getId$() const;

    MCAPI std::string getName$() const;

    MCAPI void write$(class BinaryStream& stream) const;

    // NOLINTEND
};
