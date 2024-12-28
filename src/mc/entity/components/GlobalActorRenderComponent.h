#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct GlobalActorRenderComponent {
public:
    // prevent constructor by default
    GlobalActorRenderComponent& operator=(GlobalActorRenderComponent const&);
    GlobalActorRenderComponent(GlobalActorRenderComponent const&);
    GlobalActorRenderComponent();
};
