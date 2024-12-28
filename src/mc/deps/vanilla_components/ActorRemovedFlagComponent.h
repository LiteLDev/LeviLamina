#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorRemovedFlagComponent {
public:
    // prevent constructor by default
    ActorRemovedFlagComponent& operator=(ActorRemovedFlagComponent const&);
    ActorRemovedFlagComponent(ActorRemovedFlagComponent const&);
    ActorRemovedFlagComponent();
};
