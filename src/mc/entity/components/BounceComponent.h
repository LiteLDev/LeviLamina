#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BounceComponent {

public:
    // prevent constructor by default
    BounceComponent& operator=(BounceComponent const&) = delete;
    BounceComponent(BounceComponent const&)            = delete;
    BounceComponent()                                  = delete;
};
