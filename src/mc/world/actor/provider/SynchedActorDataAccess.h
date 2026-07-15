#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorFlags.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class Vec2;
// clang-format on

namespace SynchedActorDataAccess {
// functions
// NOLINTBEGIN
MCAPI bool getActorFlag(::EntityContext const& entity, ::ActorFlags flag);

#ifdef LL_PLAT_C
MCAPI float getBoundingBoxScale(::EntityContext const& entity);
#endif

MCAPI ::Vec2 getBoundingBoxSize(::EntityContext const& entity);

MCAPI void initializeActor(::EntityContext& entityContext);

MCAPI void initializeHorse(::EntityContext& entityContext);

MCAPI void initializeMob(::EntityContext& entityContext);

MCAPI void setActorFlag(::EntityContext& entity, ::ActorFlags flag, bool value);

MCAPI void setBoundingBoxScale(::EntityContext& entity, float scale);

MCAPI void setControllingSeatIndex(::EntityContext& entity, schar controllingSeatIndex);

MCAPI void setHorseType(::EntityContext& entity, int type);

MCAPI void setJumpDuration(::EntityContext& entity, schar jumpDuration);
// NOLINTEND

} // namespace SynchedActorDataAccess
