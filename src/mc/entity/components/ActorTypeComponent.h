#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorTypeComponent {
public:
    // prevent constructor by default
    ActorTypeComponent& operator=(ActorTypeComponent const&);
    ActorTypeComponent(ActorTypeComponent const&);
    ActorTypeComponent();
};
