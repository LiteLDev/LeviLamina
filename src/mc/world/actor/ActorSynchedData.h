#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class EntityContext;
class SynchedActorDataEntityWrapper;
// clang-format on

namespace ActorSynchedData {
// functions
// NOLINTBEGIN
MCNAPI void updateAction(::Actor& actor);

MCNAPI void updateAlwaysShowNameTag(::EntityContext& entity, ::SynchedActorDataEntityWrapper const& entityData);

MCNAPI void updateAmbientSound(::EntityContext& entity);

MCNAPI void updateBoundingBox(::EntityContext& entity, ::SynchedActorDataEntityWrapper const& entityData);

MCNAPI void updateBuoyancyData(::EntityContext& entity, ::SynchedActorDataEntityWrapper const& entityData);

MCNAPI void updateCommandBlock(::Actor& actor, int dataId, ::std::string& filteredNameTag);

MCNAPI void updateContainer(::Actor& actor);

MCNAPI void updateHasNPC(::Actor& actor);

MCNAPI void updateHitbox(::EntityContext& entity, ::SynchedActorDataEntityWrapper const& entityData);

MCNAPI void updateInteractText(::Actor& actor);

MCNAPI void updateIsBuoyant(::EntityContext& entity, ::SynchedActorDataEntityWrapper& entityData);

MCNAPI void updateNPCData(::Actor& actor);

MCNAPI void updateNameTag(::Actor& actor);

MCNAPI void updateRawNameText(::Actor& actor);

MCNAPI void updateRuntimeID(::Actor& actor);
// NOLINTEND

} // namespace ActorSynchedData
