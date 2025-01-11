#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorFlags.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class Vec2;
class Vec3;
struct ActorDataBoundingBoxComponent;
struct ActorDataDirtyFlagsComponent;
struct ActorDataFlagComponent;
struct ActorDataHorseFlagComponent;
struct ActorDataJumpDurationComponent;
struct ActorDataSeatOffsetComponent;
// clang-format on

namespace SynchedActorDataAccess {
// functions
// NOLINTBEGIN
MCAPI bool getActorFlag(::EntityContext const& entity, ::ActorFlags flag);

MCAPI float getBoundingBoxScale(::EntityContext const& entity);

MCAPI ::Vec2 getBoundingBoxSize(::EntityContext const& entity);

MCAPI int getControllingSeatIndex(::EntityContext const& entity);

MCAPI int getHorseFlag(::EntityContext const& entity);

MCAPI int getHorseType(::EntityContext const& entity);

MCAPI int getJumpDuration(::EntityContext const& entity);

MCAPI ::Vec3 getSeatOffset(::EntityContext const& entity);

MCAPI void initializeActor(::EntityContext& entityContext);

MCAPI void initializeHorse(::EntityContext& entityContext);

MCAPI void initializeMob(::EntityContext& entityContext);

MCAPI void setActorFlag(::EntityContext& entity, ::ActorFlags flag, bool value);

MCAPI void setActorFlag(
    ::ActorDataFlagComponent&       actorDataFlagComponent,
    ::ActorDataDirtyFlagsComponent& dirtyFlags,
    ::ActorFlags                    flag,
    bool                            value
);

MCAPI void setActorFlags(
    ::ActorDataFlagComponent&       actorDataFlagComponent,
    ::ActorDataDirtyFlagsComponent& dirtyFlagsComponent,
    ::std::bitset<119> const&       newValue
);

MCAPI void setBoundingBoxScale(::EntityContext& entity, float scale);

MCAPI void setBoundingBoxScale(
    ::ActorDataBoundingBoxComponent& boundingBoxComponent,
    ::ActorDataDirtyFlagsComponent&  dirtyFlagsComponent,
    float                            scale
);

MCAPI void setBoundingBoxSize(
    ::ActorDataBoundingBoxComponent& boundingBoxComponent,
    ::ActorDataDirtyFlagsComponent&  dirtyFlagsComponent,
    float                            width,
    float                            height
);

MCAPI void setControllingSeatIndex(::EntityContext& entity, schar controllingSeatIndex);

MCAPI void setHorseFlag(
    ::ActorDataHorseFlagComponent&  horseFlagComponent,
    ::ActorDataDirtyFlagsComponent& dirtyFlagsComponent,
    int                             horseFlag
);

MCAPI void setHorseType(::EntityContext& entity, int type);

MCAPI void setJumpDuration(::EntityContext& entity, schar jumpDuration);

MCFOLD void setJumpDuration(
    ::ActorDataJumpDurationComponent& jumpDurationComponent,
    ::ActorDataDirtyFlagsComponent&   dirtyFlagsComponent,
    schar                             jumpDuration
);

MCFOLD void setSeatOffset(
    ::ActorDataSeatOffsetComponent& seatOffsetComponent,
    ::ActorDataDirtyFlagsComponent& dirtyFlagsComponent,
    ::Vec3 const&                   seatOffset
);

MCAPI void setValue(
    ::ActorDataBoundingBoxComponent& boundingBoxComponent,
    ::ActorDataDirtyFlagsComponent&  dirtyFlagsComponent,
    ::std::array<float, 3> const&    values
);

MCFOLD void setValue(
    ::ActorDataJumpDurationComponent& jumpDurationComponent,
    ::ActorDataDirtyFlagsComponent&   dirtyFlagsComponent,
    schar                             jumpDuration
);

MCFOLD void setValue(
    ::ActorDataSeatOffsetComponent& seatOffsetComponent,
    ::ActorDataDirtyFlagsComponent& dirtyFlagsComponent,
    ::Vec3 const&                   seatOffset
);
// NOLINTEND

} // namespace SynchedActorDataAccess
