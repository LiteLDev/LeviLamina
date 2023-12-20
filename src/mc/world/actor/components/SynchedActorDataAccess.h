#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SynchedActorDataAccess {
// NOLINTBEGIN
// symbol: ?getHorseFlag@SynchedActorDataAccess@@YAHAEBVEntityContext@@@Z
MCAPI int getHorseFlag(class EntityContext const&);

// symbol: ?getJumpDuration@SynchedActorDataAccess@@YAHAEBVEntityContext@@@Z
MCAPI int getJumpDuration(class EntityContext const&);

// symbol: ?initializeHorse@SynchedActorDataAccess@@YAXAEAVEntityContext@@@Z
MCAPI void initializeHorse(class EntityContext&);

// symbol: ?initializeMob@SynchedActorDataAccess@@YAXAEAVEntityContext@@@Z
MCAPI void initializeMob(class EntityContext&);

// symbol:
// ?setHorseFlag@SynchedActorDataAccess@@YAXAEAUActorDataHorseFlagComponent@@AEAUActorDataDirtyFlagsComponent@@H@Z
MCAPI void setHorseFlag(struct ActorDataHorseFlagComponent&, struct ActorDataDirtyFlagsComponent&, int);

// symbol: ?setJumpDuration@SynchedActorDataAccess@@YAXAEAVEntityContext@@C@Z
MCAPI void setJumpDuration(class EntityContext&, schar);

// symbol:
// ?setJumpDuration@SynchedActorDataAccess@@YAXAEAUActorDataJumpDurationComponent@@AEAUActorDataDirtyFlagsComponent@@C@Z
MCAPI void setJumpDuration(struct ActorDataJumpDurationComponent&, struct ActorDataDirtyFlagsComponent&, schar);
// NOLINTEND

}; // namespace SynchedActorDataAccess
