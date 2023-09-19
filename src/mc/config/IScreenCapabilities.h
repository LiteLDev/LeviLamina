#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IScreenCapabilities {
public:
    // prevent constructor by default
    IScreenCapabilities& operator=(IScreenCapabilities const&);
    IScreenCapabilities(IScreenCapabilities const&);
    IScreenCapabilities();
};
