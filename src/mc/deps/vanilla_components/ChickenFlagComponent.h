#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ChickenFlagComponent {
public:
    // prevent constructor by default
    ChickenFlagComponent& operator=(ChickenFlagComponent const&);
    ChickenFlagComponent(ChickenFlagComponent const&);
    ChickenFlagComponent();
};
