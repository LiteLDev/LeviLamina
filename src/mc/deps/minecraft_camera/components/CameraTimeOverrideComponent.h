#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CameraTimeOverrideComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::function<float()>> mGetDeltaTimeOverride;
    // NOLINTEND
};
