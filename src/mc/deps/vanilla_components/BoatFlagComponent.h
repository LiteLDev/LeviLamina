#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BoatFlagComponent {
public:
    // prevent constructor by default
    BoatFlagComponent& operator=(BoatFlagComponent const&);
    BoatFlagComponent(BoatFlagComponent const&);
    BoatFlagComponent();
};
