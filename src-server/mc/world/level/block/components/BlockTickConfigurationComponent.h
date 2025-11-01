#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BlockTickConfigurationComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint> mDelayIntervalMinTicks;
    ::ll::TypedStorage<4, 4, uint> mDelayIntervalMaxTicks;
    ::ll::TypedStorage<1, 1, bool> mLooping;
    // NOLINTEND

};
