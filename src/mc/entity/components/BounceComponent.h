#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BounceComponent {
public:
    // prevent constructor by default
    BounceComponent& operator=(BounceComponent const&);
    BounceComponent(BounceComponent const&);
    BounceComponent();
};
