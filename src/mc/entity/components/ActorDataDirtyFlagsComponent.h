#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorDataDirtyFlagsComponent {
public:
    // prevent constructor by default
    ActorDataDirtyFlagsComponent& operator=(ActorDataDirtyFlagsComponent const&);
    ActorDataDirtyFlagsComponent(ActorDataDirtyFlagsComponent const&);
    ActorDataDirtyFlagsComponent();
};
