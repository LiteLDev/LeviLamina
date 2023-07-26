#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IResourceDropsStrategy {

public:
    // prevent constructor by default
    IResourceDropsStrategy& operator=(IResourceDropsStrategy const&) = delete;
    IResourceDropsStrategy(IResourceDropsStrategy const&)            = delete;
    IResourceDropsStrategy()                                         = delete;
};
