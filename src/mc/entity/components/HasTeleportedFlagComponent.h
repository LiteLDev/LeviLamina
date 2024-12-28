#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct HasTeleportedFlagComponent {
public:
    // prevent constructor by default
    HasTeleportedFlagComponent& operator=(HasTeleportedFlagComponent const&);
    HasTeleportedFlagComponent(HasTeleportedFlagComponent const&);
    HasTeleportedFlagComponent();
};
