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
MCAPI void updateAlwaysShowNameTag(::EntityContext& entity, ::SynchedActorDataEntityWrapper const& entityData);

MCAPI void updateCommandBlock(::Actor& actor, int dataId, ::std::string& filteredNameTag);

MCAPI void updateContainer(::Actor& actor);

MCAPI void updateHasNPC(::Actor& actor);

MCAPI void updateIsBuoyant(::EntityContext& entity, ::SynchedActorDataEntityWrapper& entityData);

MCAPI void updateNameTag(::Actor& actor);

MCAPI void updateRuntimeID(::Actor& actor);
// NOLINTEND

} // namespace ActorSynchedData
