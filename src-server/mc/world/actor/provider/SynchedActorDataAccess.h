#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorFlags.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
// clang-format on

namespace SynchedActorDataAccess {

LLAPI bool getActorFlag(::EntityContext const& entity, ::ActorFlags flag);
// functions
// NOLINTBEGIN
MCAPI int getControllingSeatIndex(::EntityContext const& entity);

MCAPI int getJumpDuration(::EntityContext const& entity);

MCAPI void initializeActor(::EntityContext& entityContext);

MCAPI void initializeHorse(::EntityContext& entityContext);

MCAPI void initializeMob(::EntityContext& entityContext);

MCAPI void setActorFlag(::EntityContext& entity, ::ActorFlags flag, bool value);

MCAPI void setBoundingBoxScale(::EntityContext& entity, float scale);

MCAPI void setHorseType(::EntityContext& entity, int type);
// NOLINTEND

}
