#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorIsBeingDestroyedFlagComponent {
public:
    // prevent constructor by default
    ActorIsBeingDestroyedFlagComponent& operator=(ActorIsBeingDestroyedFlagComponent const&);
    ActorIsBeingDestroyedFlagComponent(ActorIsBeingDestroyedFlagComponent const&);
    ActorIsBeingDestroyedFlagComponent();
};
