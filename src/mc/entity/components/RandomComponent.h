#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct RandomComponent {
public:
    // prevent constructor by default
    RandomComponent& operator=(RandomComponent const&);
    RandomComponent(RandomComponent const&);
    RandomComponent();
};
