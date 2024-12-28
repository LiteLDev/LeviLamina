#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SynchedActorDataAccessor {
public:
    // prevent constructor by default
    SynchedActorDataAccessor& operator=(SynchedActorDataAccessor const&);
    SynchedActorDataAccessor(SynchedActorDataAccessor const&);
    SynchedActorDataAccessor();
};
