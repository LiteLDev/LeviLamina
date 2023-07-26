#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IAdvancedGraphicsOptions {

public:
    // prevent constructor by default
    IAdvancedGraphicsOptions& operator=(IAdvancedGraphicsOptions const&) = delete;
    IAdvancedGraphicsOptions(IAdvancedGraphicsOptions const&)            = delete;
    IAdvancedGraphicsOptions()                                           = delete;
};
