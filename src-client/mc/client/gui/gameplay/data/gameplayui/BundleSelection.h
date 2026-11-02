#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace GameplayUI {

struct BundleSelection {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> bundleID;
    ::ll::TypedStorage<4, 4, int> index;
    // NOLINTEND
};

} // namespace GameplayUI
