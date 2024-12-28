#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorComponent {
public:
    // prevent constructor by default
    ActorComponent& operator=(ActorComponent const&);
    ActorComponent(ActorComponent const&);
    ActorComponent();
};
