#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SynchedActorDataComponent {
public:
    // prevent constructor by default
    SynchedActorDataComponent& operator=(SynchedActorDataComponent const&);
    SynchedActorDataComponent(SynchedActorDataComponent const&);
    SynchedActorDataComponent();

public:
    // NOLINTBEGIN
    MCAPI ~SynchedActorDataComponent();

    // NOLINTEND
};
