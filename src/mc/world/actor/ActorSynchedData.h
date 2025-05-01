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
MCNAPI void updateAlwaysShowNameTag(::EntityContext& entity, ::SynchedActorDataEntityWrapper const& entityData);

MCNAPI void updateBoundingBox(::EntityContext& entity, ::SynchedActorDataEntityWrapper const& entityData);

MCNAPI void updateCommandBlock(::Actor& actor, int dataId, ::std::string& filteredNameTag);

MCNAPI void updateContainer(::Actor& actor);

MCNAPI void updateHasNPC(::Actor& actor);

MCNAPI void updateIsBuoyant(::EntityContext& entity, ::SynchedActorDataEntityWrapper& entityData);

MCNAPI void updateNameTag(::Actor& actor);
// NOLINTEND

} // namespace ActorSynchedData
