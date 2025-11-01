#pragma once

#include "mc/_HeaderOutputPredefine.h"

class UpdateAndRenderThrottleComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mCanUpdateAndRender;
    ::ll::TypedStorage<1, 1, bool> mWasVisibleLastRender;
    // NOLINTEND

};
