#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/deps/shared_types/legacy/actor/ActorDamageCause.h"
#include "mc/events/MinecraftEventing.h"
#include "mc/world/actor/ActorType.h"
#include "mc/world/item/ItemUseMethod.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Dimension;
class ItemStackBase;
class LegacyTelemetryEventPacket;
class Mob;
class Player;
class Raid;
struct ActorUniqueID;
// clang-format on

namespace LegacyTelemetryEvent {
// functions
// NOLINTBEGIN
MCAPI ::LegacyTelemetryEventPacket
packetForAchievement(::Player const* player, ::MinecraftEventing::AchievementIds achievementId, bool usePlayerID);

MCAPI ::LegacyTelemetryEventPacket packetForActorDefinition(::Player const& player, ::std::string const& eventName);

MCAPI ::LegacyTelemetryEventPacket packetForAgentCreated(::Player const& player);

MCAPI ::LegacyTelemetryEventPacket packetForBellUsed(::Player const& player, short itemId);

MCAPI ::LegacyTelemetryEventPacket
packetForBossKilled(::Player const& player, int partySize, ::gsl::not_null<::Actor const*> entity);

MCAPI ::LegacyTelemetryEventPacket packetForCarefulRestoration(::Player const& player);

MCAPI ::LegacyTelemetryEventPacket
packetForCauldronUsed(::Player const& player, short contentsType, uint contentsColor, short fillLevel);

MCAPI ::LegacyTelemetryEventPacket
packetForCodeBuilderRuntimeAction(::Player const& player, ::std::string const& runtimeAction);

MCAPI ::LegacyTelemetryEventPacket
packetForCodeBuilderScoreboard(::Player const& player, ::std::string const& objective, int score);

MCAPI ::LegacyTelemetryEventPacket packetForComposterUsed(
    ::Player const&                              player,
    short                                        itemId,
    ::MinecraftEventing::POIBlockInteractionType interactionType
);

MCAPI ::LegacyTelemetryEventPacket packetForHoneyHarvested(::Player const& player);

MCAPI ::LegacyTelemetryEventPacket packetForInteraction(
    ::Player const&                      player,
    ::gsl::not_null<::Actor const*>      interactedEntity,
    ::MinecraftEventing::InteractionType interactionType
);

MCAPI ::LegacyTelemetryEventPacket
packetForItemUsed(::Player const& player, ::ItemStackBase const& item, ::ItemUseMethod useMethod, int useCount);

MCAPI ::LegacyTelemetryEventPacket packetForMobBorn(::Player const& player, ::gsl::not_null<::Mob const*> baby);

MCAPI ::LegacyTelemetryEventPacket packetForMobKilled(
    ::Player const&                         player,
    ::Actor const*                          killerEntity,
    ::ActorUniqueID const&                  killedMobID,
    ::SharedTypes::Legacy::ActorDamageCause cause,
    ::ActorType                             damageChildType
);

MCAPI ::LegacyTelemetryEventPacket packetForMobKilled(
    ::Player const&                         player,
    ::Actor const*                          killerEntity,
    ::ActorUniqueID const&                  killedMobID,
    ::SharedTypes::Legacy::ActorDamageCause cause,
    ::std::string                           traderName,
    int                                     traderTier,
    ::ActorType                             damageChildType
);

MCAPI ::LegacyTelemetryEventPacket packetForPOICauldronUsed(
    ::Player const&                              player,
    short                                        itemId,
    ::MinecraftEventing::POIBlockInteractionType interactionType
);

MCAPI ::LegacyTelemetryEventPacket
packetForPiglinBarter(::Player const& player, short itemId, bool wasTargetingBarteringPlayer);

MCAPI ::LegacyTelemetryEventPacket packetForPlayerDied(
    ::Player const&                         player,
    int                                     killerId,
    int                                     killerVariant,
    ::SharedTypes::Legacy::ActorDamageCause cause,
    bool                                    inRaid
);

MCAPI ::LegacyTelemetryEventPacket packetForPlayerWaxedOrUnwaxedCopper(::Player const& player, int blockID);

MCAPI ::LegacyTelemetryEventPacket
packetForPortalCreated(::Player const& player, ::DimensionType portalBuiltInDimension);

MCAPI ::LegacyTelemetryEventPacket
packetForPortalUsed(::Player const& player, ::DimensionType fromDimension, ::DimensionType toDimension);

MCAPI ::LegacyTelemetryEventPacket packetForRaidUpdate(::Player const& player, ::Raid const& raid, bool success);

MCAPI ::LegacyTelemetryEventPacket packetForSlashCommand(
    ::Player const&      player,
    ::std::string const& commandName,
    int                  successCount,
    int                  errorCount,
    ::std::string const& errorList
);

MCAPI ::LegacyTelemetryEventPacket packetForSneakCloseToSculkSensor(::Player const& player);

MCAPI ::LegacyTelemetryEventPacket packetForStriderRiddenInLavaInOverworld(::Player const& player);

MCAPI ::LegacyTelemetryEventPacket packetForTargetBlockHit(::Player const& player, int redstoneLevel);
// NOLINTEND

} // namespace LegacyTelemetryEvent
