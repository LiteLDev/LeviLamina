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
MCAPI ::std::array<::HashedString, 24> getEnderDragonHistoricalFrameVariables();

MCAPI void initializeAgent(::EntityContext& entityContext);

MCAPI void initializeArmorStand(::EntityContext& entityContext);

MCAPI void initializeCat(::EntityContext& entityContext);

MCAPI void initializeChicken(::EntityContext& entityContext);

MCAPI void initializeFish(::EntityContext& entityContext);

MCAPI void initializeGhast(::EntityContext& entityContext);

MCAPI void initializeGoat(::EntityContext& entityContext);

MCAPI void initializeHorse(::EntityContext& entityContext);

MCAPI void initializeIronGolem(::EntityContext& entityContext);

MCAPI void initializeLlama(::EntityContext& entityContext);

MCAPI void initializeOcelot(::EntityContext& entityContext);

MCAPI void initializePiglin(::EntityContext& entityContext);

MCAPI void initializePillager(::EntityContext& entityContext);

MCAPI void initializePufferfish(::EntityContext& entityContext);

MCAPI void initializeRabbit(::EntityContext& entityContext);

MCAPI void initializeShulker(::EntityContext& entityContext);

MCAPI void initializeSquid(::EntityContext& entityContext);

MCAPI void initializeTripodCamera(::EntityContext& entityContext);

MCAPI void initializeTropicalFish(::EntityContext& entityContext);

MCAPI void initializeVillager(::EntityContext& entityContext);

MCAPI void initializeWanderingTrader(::EntityContext& entityContext);

MCAPI void initializeWitch(::EntityContext& entityContext);

MCAPI void updateEntitySpecificMolangVariables(::Actor& actor, ::RenderParams& renderParams);
// NOLINTEND

} // namespace LegacyMolangVariableUpdate
