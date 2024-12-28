#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SynchedActorDataInitializer {
public:
    // prevent constructor by default
    SynchedActorDataInitializer& operator=(SynchedActorDataInitializer const&);
    SynchedActorDataInitializer(SynchedActorDataInitializer const&);
    SynchedActorDataInitializer();
};
