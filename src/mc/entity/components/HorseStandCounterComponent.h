#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct HorseStandCounterComponent {

public:
    // prevent constructor by default
    HorseStandCounterComponent& operator=(HorseStandCounterComponent const&) = delete;
    HorseStandCounterComponent(HorseStandCounterComponent const&)            = delete;
    HorseStandCounterComponent()                                             = delete;
};
