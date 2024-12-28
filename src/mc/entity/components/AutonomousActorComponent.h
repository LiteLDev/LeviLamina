#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct AutonomousActorComponent {
public:
    // prevent constructor by default
    AutonomousActorComponent& operator=(AutonomousActorComponent const&);
    AutonomousActorComponent(AutonomousActorComponent const&);
    AutonomousActorComponent();
};
