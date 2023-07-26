#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IScreenCapabilities {

public:
    // prevent constructor by default
    IScreenCapabilities& operator=(IScreenCapabilities const&) = delete;
    IScreenCapabilities(IScreenCapabilities const&)            = delete;
    IScreenCapabilities()                                      = delete;
};
