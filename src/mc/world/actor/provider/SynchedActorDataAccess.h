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

LLAPI bool getActorFlag(::EntityContext const& entity, ::ActorFlags flag);
// functions
// NOLINTBEGIN
MCAPI bool getActorFlag(::EntityContext const& entity, ::ActorFlags flag);

#ifdef LL_PLAT_C
MCNAPI float getBoundingBoxScale(::EntityContext const& entity);
#endif

MCAPI ::Vec2 getBoundingBoxSize(::EntityContext const& entity);

MCNAPI void initializeActor(::EntityContext& entityContext);

MCNAPI void initializeHorse(::EntityContext& entityContext);

MCNAPI void initializeMob(::EntityContext& entityContext);

MCAPI void setActorFlag(::EntityContext& entity, ::ActorFlags flag, bool value);

MCAPI void setBoundingBoxScale(::EntityContext& entity, float scale);

MCNAPI void setControllingSeatIndex(::EntityContext& entity, schar controllingSeatIndex);

MCNAPI void setHorseType(::EntityContext& entity, int type);

MCNAPI void setJumpDuration(::EntityContext& entity, schar jumpDuration);
// NOLINTEND

} // namespace SynchedActorDataAccess
