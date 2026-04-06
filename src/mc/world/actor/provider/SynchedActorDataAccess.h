#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/actor/ActorFlags.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class Vec3;
// clang-format on

namespace SynchedActorDataAccess {

LLAPI bool getActorFlag(::EntityContext const& entity, ::ActorFlags flag);
// functions
// NOLINTBEGIN
#ifdef LL_PLAT_C
MCAPI float getBoundingBoxScale(::EntityContext const& entity);
#endif

MCAPI int getControllingSeatIndex(::EntityContext const& entity);

MCAPI int getJumpDuration(::EntityContext const& entity);

#ifdef LL_PLAT_C
MCAPI ::Vec3 getSeatOffset(::EntityContext const& entity);
#endif

MCAPI void initializeActor(::EntityContext& entityContext);

MCAPI void initializeHorse(::EntityContext& entityContext);

MCAPI void setBoundingBoxScale(::EntityContext& entity, float scale);

MCAPI void setHorseType(::EntityContext& entity, int type);
// NOLINTEND

} // namespace SynchedActorDataAccess
