#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorFlags.h"

namespace SynchedActorDataAccess {
// NOLINTBEGIN
MCAPI bool getActorFlag(class EntityContext const&, ::ActorFlags);

MCAPI float getBoundingBoxScale(class EntityContext const&);

MCAPI class Vec2 getBoundingBoxSize(class EntityContext const&);

MCAPI int getControllingSeatIndex(class EntityContext const&);

MCAPI int getHorseFlag(class EntityContext const&);

MCAPI int getJumpDuration(class EntityContext const&);

MCAPI class Vec3 getSeatOffset(class EntityContext const&);

MCAPI void initializeActor(class EntityContext&);

MCAPI void initializeHorse(class EntityContext&);

MCAPI void initializeMob(class EntityContext&);

MCAPI void setActorFlag(class EntityContext&, ::ActorFlags, bool);

MCAPI void setActorFlag(struct ActorDataFlagComponent&, struct ActorDataDirtyFlagsComponent&, ::ActorFlags, bool);

MCAPI void setActorFlags(struct ActorDataFlagComponent&, struct ActorDataDirtyFlagsComponent&, std::bitset<119> const&);

MCAPI void setBoundingBoxScale(class EntityContext&, float);

MCAPI void setBoundingBoxScale(struct ActorDataBoundingBoxComponent&, struct ActorDataDirtyFlagsComponent&, float);

MCAPI void
setBoundingBoxSize(struct ActorDataBoundingBoxComponent&, struct ActorDataDirtyFlagsComponent&, float, float);

MCAPI void setControllingSeatIndex(class EntityContext&, schar);

MCAPI void setHorseFlag(struct ActorDataHorseFlagComponent&, struct ActorDataDirtyFlagsComponent&, int);

MCAPI void setJumpDuration(class EntityContext&, schar);

MCAPI void setJumpDuration(struct ActorDataJumpDurationComponent&, struct ActorDataDirtyFlagsComponent&, schar);

MCAPI void setSeatOffset(struct ActorDataSeatOffsetComponent&, struct ActorDataDirtyFlagsComponent&, class Vec3 const&);

MCAPI void
setValue(struct ActorDataBoundingBoxComponent&, struct ActorDataDirtyFlagsComponent&, std::array<float, 3> const&);

MCAPI void setValue(struct ActorDataJumpDurationComponent&, struct ActorDataDirtyFlagsComponent&, schar);

MCAPI void setValue(struct ActorDataSeatOffsetComponent&, struct ActorDataDirtyFlagsComponent&, class Vec3 const&);
// NOLINTEND

}; // namespace SynchedActorDataAccess
