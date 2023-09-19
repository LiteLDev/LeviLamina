#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct HorseStandCounterComponent {
public:
    // prevent constructor by default
    HorseStandCounterComponent& operator=(HorseStandCounterComponent const&);
    HorseStandCounterComponent(HorseStandCounterComponent const&);
    HorseStandCounterComponent();
};
