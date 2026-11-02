#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace GameplayUI {

struct FurnaceInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> litProgress;
    ::ll::TypedStorage<4, 4, int> burnProgress;
    // NOLINTEND
};

} // namespace GameplayUI
