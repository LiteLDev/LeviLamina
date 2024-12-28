#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorTickedComponent {
public:
    // prevent constructor by default
    ActorTickedComponent& operator=(ActorTickedComponent const&);
    ActorTickedComponent(ActorTickedComponent const&);
    ActorTickedComponent();
};
