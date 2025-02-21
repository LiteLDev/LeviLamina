#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BuoyancyFloatRequestComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mCanFloat;
    ::ll::TypedStorage<1, 1, bool> mNeedToResurface;
    // NOLINTEND
};
