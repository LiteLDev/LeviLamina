#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class EntityContext;
class HashedString;
class RenderParams;
// clang-format on

namespace LegacyMolangVariableUpdate {
// functions
// NOLINTBEGIN
MCNAPI ::std::array<::HashedString, 24> getEnderDragonHistoricalFrameVariables();

MCNAPI void initializeAgent(::EntityContext& entityContext);

MCNAPI void initializeArmorStand(::EntityContext& entityContext);

MCNAPI void initializeCat(::EntityContext& entityContext);

MCNAPI void initializeChicken(::EntityContext& entityContext);

MCNAPI void initializeEnderDragon(::EntityContext& entityContext);

MCNAPI void initializeFish(::EntityContext& entityContext);

MCNAPI void initializeGhast(::EntityContext& entityContext);

MCNAPI void initializeGoat(::EntityContext& entityContext);

MCNAPI void initializeHorse(::EntityContext& entityContext);

MCNAPI void initializeIronGolem(::EntityContext& entityContext);

MCNAPI void initializeLlama(::EntityContext& entityContext);

MCNAPI void initializeOcelot(::EntityContext& entityContext);

MCNAPI void initializePiglin(::EntityContext& entityContext);

MCNAPI void initializePillager(::EntityContext& entityContext);

MCNAPI void initializePufferfish(::EntityContext& entityContext);

MCNAPI void initializeRabbit(::EntityContext& entityContext);

MCNAPI void initializeShulker(::EntityContext& entityContext);

MCNAPI void initializeSquid(::EntityContext& entityContext);

MCNAPI void initializeTripodCamera(::EntityContext& entityContext);

MCNAPI void initializeTropicalFish(::EntityContext& entityContext);

MCNAPI void initializeVillager(::EntityContext& entityContext);

MCNAPI void initializeWanderingTrader(::EntityContext& entityContext);

MCNAPI void initializeWitch(::EntityContext& entityContext);

MCNAPI void updateEntitySpecificMolangVariables(::Actor& actor, ::RenderParams& renderParams);
// NOLINTEND

} // namespace LegacyMolangVariableUpdate
