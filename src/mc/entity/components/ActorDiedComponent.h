#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorDiedComponent {
public:
    // prevent constructor by default
    ActorDiedComponent& operator=(ActorDiedComponent const&);
    ActorDiedComponent(ActorDiedComponent const&);
    ActorDiedComponent();
};
