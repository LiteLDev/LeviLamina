#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorFlags.h"

namespace SynchedActorDataAccess {
// NOLINTBEGIN
MCAPI bool getActorFlag(class EntityContext const& entity, ::ActorFlags flag);

MCAPI float getBoundingBoxScale(class EntityContext const& entity);

MCAPI class Vec2 getBoundingBoxSize(class EntityContext const& entity);

MCAPI int getControllingSeatIndex(class EntityContext const& entity);

MCAPI int getHorseFlag(class EntityContext const& entity);

MCAPI int getJumpDuration(class EntityContext const& entity);

MCAPI class Vec3 getSeatOffset(class EntityContext const& entity);

MCAPI void initializeActor(class EntityContext& entityContext);

MCAPI void initializeHorse(class EntityContext& entityContext);

MCAPI void initializeMob(class EntityContext& entityContext);

MCAPI void setActorFlag(class EntityContext& entity, ::ActorFlags flag, bool value);

MCAPI void setActorFlag(
    struct ActorDataFlagComponent&       actorDataFlagComponent,
    struct ActorDataDirtyFlagsComponent& dirtyFlags,
    ::ActorFlags                         flag,
    bool                                 value
);

MCAPI void setActorFlags(
    struct ActorDataFlagComponent&       actorDataFlagComponent,
    struct ActorDataDirtyFlagsComponent& dirtyFlagsComponent,
    std::bitset<119> const&              newValue
);

MCAPI void setBoundingBoxScale(class EntityContext& entity, float scale);

MCAPI void setBoundingBoxScale(
    struct ActorDataBoundingBoxComponent& boundingBoxComponent,
    struct ActorDataDirtyFlagsComponent&  dirtyFlagsComponent,
    float                                 scale
);

MCAPI void setBoundingBoxSize(
    struct ActorDataBoundingBoxComponent& boundingBoxComponent,
    struct ActorDataDirtyFlagsComponent&  dirtyFlagsComponent,
    float                                 width,
    float                                 height
);

MCAPI void setControllingSeatIndex(class EntityContext& entity, schar controllingSeatIndex);

MCAPI void setHorseFlag(
    struct ActorDataHorseFlagComponent&  horseFlagComponent,
    struct ActorDataDirtyFlagsComponent& dirtyFlagsComponent,
    int                                  horseFlag
);

MCAPI void setJumpDuration(class EntityContext& entity, schar jumpDuration);

MCAPI void setJumpDuration(
    struct ActorDataJumpDurationComponent& jumpDurationComponent,
    struct ActorDataDirtyFlagsComponent&   dirtyFlagsComponent,
    schar                                  jumpDuration
);

MCAPI void setSeatOffset(
    struct ActorDataSeatOffsetComponent& seatOffsetComponent,
    struct ActorDataDirtyFlagsComponent& dirtyFlagsComponent,
    class Vec3 const&                    seatOffset
);

MCAPI void setValue(
    struct ActorDataBoundingBoxComponent& boundingBoxComponent,
    struct ActorDataDirtyFlagsComponent&  dirtyFlagsComponent,
    std::array<float, 3> const&           values
);

MCAPI void setValue(
    struct ActorDataJumpDurationComponent& jumpDurationComponent,
    struct ActorDataDirtyFlagsComponent&   dirtyFlagsComponent,
    schar                                  jumpDuration
);

MCAPI void setValue(
    struct ActorDataSeatOffsetComponent& seatOffsetComponent,
    struct ActorDataDirtyFlagsComponent& dirtyFlagsComponent,
    class Vec3 const&                    seatOffset
);
// NOLINTEND

}; // namespace SynchedActorDataAccess
