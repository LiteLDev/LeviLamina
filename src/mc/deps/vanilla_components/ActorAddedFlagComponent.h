#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorAddedFlagComponent {
public:
    // prevent constructor by default
    ActorAddedFlagComponent& operator=(ActorAddedFlagComponent const&);
    ActorAddedFlagComponent(ActorAddedFlagComponent const&);
    ActorAddedFlagComponent();
};
