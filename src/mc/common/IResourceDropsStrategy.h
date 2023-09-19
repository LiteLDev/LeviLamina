#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IResourceDropsStrategy {
public:
    // prevent constructor by default
    IResourceDropsStrategy& operator=(IResourceDropsStrategy const&);
    IResourceDropsStrategy(IResourceDropsStrategy const&);
    IResourceDropsStrategy();
};
