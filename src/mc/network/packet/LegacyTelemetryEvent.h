#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/actor/ActorDamageCause.h"
#include "mc/events/MinecraftEventing.h"
#include "mc/world/actor/ActorType.h"
#include "mc/world/item/ItemUseMethod.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ItemStackBase;
class LegacyTelemetryEventPacket;
class Mob;
class Player;
class Raid;
struct ActorUniqueID;
struct DimensionType;
// clang-format on

namespace LegacyTelemetryEvent {
// functions
// NOLINTBEGIN
MCNAPI ::LegacyTelemetryEventPacket
packetForAchievement(::Player const* player, ::MinecraftEventing::AchievementIds achievementId, bool usePlayerID);

MCNAPI ::LegacyTelemetryEventPacket packetForActorDefinition(::Player const& player, ::std::string const& eventName);

MCNAPI ::LegacyTelemetryEventPacket packetForAgentCreated(::Player const& player);

MCNAPI ::LegacyTelemetryEventPacket packetForBellUsed(::Player const& player, short itemId);

MCNAPI ::LegacyTelemetryEventPacket
packetForBossKilled(::Player const& player, int partySize, ::gsl::not_null<::Actor const*> entity);

MCNAPI ::LegacyTelemetryEventPacket packetForCarefulRestoration(::Player const& player);

MCNAPI ::LegacyTelemetryEventPacket
packetForCauldronUsed(::Player const& player, short contentsType, uint contentsColor, short fillLevel);

MCNAPI ::LegacyTelemetryEventPacket
packetForCodeBuilderRuntimeAction(::Player const& player, ::std::string const& runtimeAction);

MCNAPI ::LegacyTelemetryEventPacket
packetForCodeBuilderScoreboard(::Player const& player, ::std::string const& objective, int score);

MCNAPI ::LegacyTelemetryEventPacket packetForComposterUsed(
    ::Player const&                              player,
    short                                        itemId,
    ::MinecraftEventing::POIBlockInteractionType interactionType
);

MCNAPI ::LegacyTelemetryEventPacket packetForHoneyHarvested(::Player const& player);

MCNAPI ::LegacyTelemetryEventPacket packetForInteraction(
    ::Player const&                      player,
    ::gsl::not_null<::Actor const*>      interactedEntity,
    ::MinecraftEventing::InteractionType interactionType
);

MCNAPI ::LegacyTelemetryEventPacket
packetForItemUsed(::Player const& player, ::ItemStackBase const& item, ::ItemUseMethod useMethod, int useCount);

MCNAPI ::LegacyTelemetryEventPacket packetForMobBorn(::Player const& player, ::gsl::not_null<::Mob const*> baby);

MCNAPI ::LegacyTelemetryEventPacket packetForMobKilled(
    ::Player const&                         player,
    ::Actor const*                          killerEntity,
    ::ActorUniqueID const&                  killedMobID,
    ::SharedTypes::Legacy::ActorDamageCause cause,
    ::std::string                           traderName,
    int                                     traderTier,
    ::ActorType                             damageChildType
);

MCNAPI ::LegacyTelemetryEventPacket packetForPOICauldronUsed(
    ::Player const&                              player,
    short                                        itemId,
    ::MinecraftEventing::POIBlockInteractionType interactionType
);

MCNAPI ::LegacyTelemetryEventPacket
packetForPiglinBarter(::Player const& player, short itemId, bool wasTargetingBarteringPlayer);

MCNAPI ::LegacyTelemetryEventPacket packetForPlayerDied(
    ::Player const&                         player,
    int                                     killerId,
    int                                     killerVariant,
    ::SharedTypes::Legacy::ActorDamageCause cause,
    bool                                    inRaid
);

MCNAPI ::LegacyTelemetryEventPacket packetForPlayerWaxedOrUnwaxedCopper(::Player const& player, int blockID);

MCNAPI ::LegacyTelemetryEventPacket
packetForPortalCreated(::Player const& player, ::DimensionType portalBuiltInDimension);

MCNAPI ::LegacyTelemetryEventPacket
packetForPortalUsed(::Player const& player, ::DimensionType fromDimension, ::DimensionType toDimension);

MCNAPI ::LegacyTelemetryEventPacket packetForRaidUpdate(::Player const& player, ::Raid const& raid, bool success);

MCNAPI ::LegacyTelemetryEventPacket packetForSlashCommand(
    ::Player const&      player,
    ::std::string const& commandName,
    int                  successCount,
    int                  errorCount,
    ::std::string const& errorList
);

MCNAPI ::LegacyTelemetryEventPacket packetForSneakCloseToSculkSensor(::Player const& player);

MCNAPI ::LegacyTelemetryEventPacket packetForStriderRiddenInLavaInOverworld(::Player const& player);

MCNAPI ::LegacyTelemetryEventPacket packetForTargetBlockHit(::Player const& player, int redstoneLevel);
// NOLINTEND

} // namespace LegacyTelemetryEvent
