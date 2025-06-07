#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorDataDirtyFlagsComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::bitset<136>> mDirtyFlags;
    // NOLINTEND
};
