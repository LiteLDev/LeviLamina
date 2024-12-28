#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct HangingActorFlagComponent {
public:
    // prevent constructor by default
    HangingActorFlagComponent& operator=(HangingActorFlagComponent const&);
    HangingActorFlagComponent(HangingActorFlagComponent const&);
    HangingActorFlagComponent();
};
