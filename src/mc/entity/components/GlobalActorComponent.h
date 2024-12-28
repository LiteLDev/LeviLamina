#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct GlobalActorComponent {
public:
    // prevent constructor by default
    GlobalActorComponent& operator=(GlobalActorComponent const&);
    GlobalActorComponent(GlobalActorComponent const&);
    GlobalActorComponent();
};
