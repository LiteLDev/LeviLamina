#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace GameplayUI {

struct BrewingStandInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> brewProgress;
    ::ll::TypedStorage<4, 4, float> fuelProgress;
    // NOLINTEND
};

} // namespace GameplayUI
