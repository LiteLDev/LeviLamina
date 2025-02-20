#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorFlags.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
// clang-format on

namespace SynchedActorDataAccess {
// functions
// NOLINTBEGIN
MCAPI bool getActorFlag(::EntityContext const& entity, ::ActorFlags flag);

MCAPI int getControllingSeatIndex(::EntityContext const& entity);

MCAPI int getJumpDuration(::EntityContext const& entity);

MCAPI void initializeActor(::EntityContext& entityContext);

MCAPI void setActorFlag(::EntityContext& entity, ::ActorFlags flag, bool value);

MCAPI void setBoundingBoxScale(::EntityContext& entity, float scale);

MCAPI void setControllingSeatIndex(::EntityContext& entity, schar controllingSeatIndex);

MCAPI void setHorseType(::EntityContext& entity, int type);

MCAPI void setJumpDuration(::EntityContext& entity, schar jumpDuration);
// NOLINTEND

} // namespace SynchedActorDataAccess
