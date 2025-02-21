#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BlockFlammableComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> mCatchChanceModifier;
    ::ll::TypedStorage<4, 4, int> mDestroyChanceModifier;
    // NOLINTEND
};
