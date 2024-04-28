#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorFlags.h"

namespace SynchedActorDataAccess {
// NOLINTBEGIN
// symbol: ?getActorFlag@SynchedActorDataAccess@@YA_NAEBVEntityContext@@W4ActorFlags@@@Z
MCAPI bool getActorFlag(class EntityContext const&, ::ActorFlags);

// symbol: ?getBoundingBoxScale@SynchedActorDataAccess@@YAMAEBVEntityContext@@@Z
MCAPI float getBoundingBoxScale(class EntityContext const&);

// symbol: ?getBoundingBoxSize@SynchedActorDataAccess@@YA?AVVec2@@AEBVEntityContext@@@Z
MCAPI class Vec2 getBoundingBoxSize(class EntityContext const&);

// symbol: ?getControllingSeatIndex@SynchedActorDataAccess@@YAHAEBVEntityContext@@@Z
MCAPI int getControllingSeatIndex(class EntityContext const&);

// symbol: ?getHorseFlag@SynchedActorDataAccess@@YAHAEBVEntityContext@@@Z
MCAPI int getHorseFlag(class EntityContext const&);

// symbol: ?getJumpDuration@SynchedActorDataAccess@@YAHAEBVEntityContext@@@Z
MCAPI int getJumpDuration(class EntityContext const&);

// symbol: ?getSeatOffset@SynchedActorDataAccess@@YA?AVVec3@@AEBVEntityContext@@@Z
MCAPI class Vec3 getSeatOffset(class EntityContext const&);

// symbol: ?initializeActor@SynchedActorDataAccess@@YAXAEAVEntityContext@@@Z
MCAPI void initializeActor(class EntityContext&);

// symbol: ?initializeHorse@SynchedActorDataAccess@@YAXAEAVEntityContext@@@Z
MCAPI void initializeHorse(class EntityContext&);

// symbol: ?initializeMob@SynchedActorDataAccess@@YAXAEAVEntityContext@@@Z
MCAPI void initializeMob(class EntityContext&);

// symbol: ?setActorFlag@SynchedActorDataAccess@@YAXAEAVEntityContext@@W4ActorFlags@@_N@Z
MCAPI void setActorFlag(class EntityContext&, ::ActorFlags, bool);

// symbol:
// ?setActorFlag@SynchedActorDataAccess@@YAXAEAUActorDataFlagComponent@@AEAUActorDataDirtyFlagsComponent@@W4ActorFlags@@_N@Z
MCAPI void setActorFlag(struct ActorDataFlagComponent&, struct ActorDataDirtyFlagsComponent&, ::ActorFlags, bool);

// symbol:
// ?setActorFlags@SynchedActorDataAccess@@YAXAEAUActorDataFlagComponent@@AEAUActorDataDirtyFlagsComponent@@AEBV?$bitset@$0HH@@std@@@Z
MCAPI void setActorFlags(struct ActorDataFlagComponent&, struct ActorDataDirtyFlagsComponent&, std::bitset<119> const&);

// symbol: ?setBoundingBoxScale@SynchedActorDataAccess@@YAXAEAVEntityContext@@M@Z
MCAPI void setBoundingBoxScale(class EntityContext&, float);

// symbol:
// ?setBoundingBoxScale@SynchedActorDataAccess@@YAXAEAUActorDataBoundingBoxComponent@@AEAUActorDataDirtyFlagsComponent@@M@Z
MCAPI void setBoundingBoxScale(struct ActorDataBoundingBoxComponent&, struct ActorDataDirtyFlagsComponent&, float);

// symbol:
// ?setBoundingBoxSize@SynchedActorDataAccess@@YAXAEAUActorDataBoundingBoxComponent@@AEAUActorDataDirtyFlagsComponent@@MM@Z
MCAPI void
setBoundingBoxSize(struct ActorDataBoundingBoxComponent&, struct ActorDataDirtyFlagsComponent&, float, float);

// symbol: ?setControllingSeatIndex@SynchedActorDataAccess@@YAXAEAVEntityContext@@C@Z
MCAPI void setControllingSeatIndex(class EntityContext&, schar);

// symbol:
// ?setHorseFlag@SynchedActorDataAccess@@YAXAEAUActorDataHorseFlagComponent@@AEAUActorDataDirtyFlagsComponent@@H@Z
MCAPI void setHorseFlag(struct ActorDataHorseFlagComponent&, struct ActorDataDirtyFlagsComponent&, int);

// symbol: ?setJumpDuration@SynchedActorDataAccess@@YAXAEAVEntityContext@@C@Z
MCAPI void setJumpDuration(class EntityContext&, schar);

// symbol:
// ?setJumpDuration@SynchedActorDataAccess@@YAXAEAUActorDataJumpDurationComponent@@AEAUActorDataDirtyFlagsComponent@@C@Z
MCAPI void setJumpDuration(struct ActorDataJumpDurationComponent&, struct ActorDataDirtyFlagsComponent&, schar);

// symbol:
// ?setSeatOffset@SynchedActorDataAccess@@YAXAEAUActorDataSeatOffsetComponent@@AEAUActorDataDirtyFlagsComponent@@AEBVVec3@@@Z
MCAPI void setSeatOffset(struct ActorDataSeatOffsetComponent&, struct ActorDataDirtyFlagsComponent&, class Vec3 const&);

// symbol:
// ?setValue@SynchedActorDataAccess@@YAXAEAUActorDataBoundingBoxComponent@@AEAUActorDataDirtyFlagsComponent@@AEBV?$array@M$02@std@@@Z
MCAPI void
setValue(struct ActorDataBoundingBoxComponent&, struct ActorDataDirtyFlagsComponent&, std::array<float, 3> const&);

// symbol:
// ?setValue@SynchedActorDataAccess@@YAXAEAUActorDataJumpDurationComponent@@AEAUActorDataDirtyFlagsComponent@@C@Z
MCAPI void setValue(struct ActorDataJumpDurationComponent&, struct ActorDataDirtyFlagsComponent&, schar);

// symbol:
// ?setValue@SynchedActorDataAccess@@YAXAEAUActorDataSeatOffsetComponent@@AEAUActorDataDirtyFlagsComponent@@AEBVVec3@@@Z
MCAPI void setValue(struct ActorDataSeatOffsetComponent&, struct ActorDataDirtyFlagsComponent&, class Vec3 const&);
// NOLINTEND

}; // namespace SynchedActorDataAccess
