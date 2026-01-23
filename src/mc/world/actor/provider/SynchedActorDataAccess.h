#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorFlags.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class Vec3;
// clang-format on

namespace SynchedActorDataAccess {
// functions
// NOLINTBEGIN
MCAPI_C float getBoundingBoxScale(::EntityContext const& entity);

MCAPI int getControllingSeatIndex(::EntityContext const& entity);

MCAPI int getJumpDuration(::EntityContext const& entity);

MCAPI_C ::Vec3 getSeatOffset(::EntityContext const& entity);

MCAPI void initializeActor(::EntityContext& entityContext);

MCAPI void initializeHorse(::EntityContext& entityContext);

MCAPI void setActorFlag(::EntityContext& entity, ::ActorFlags flag, bool value);

MCAPI void setBoundingBoxScale(::EntityContext& entity, float scale);

MCAPI void setHorseType(::EntityContext& entity, int type);
// NOLINTEND

} // namespace SynchedActorDataAccess
