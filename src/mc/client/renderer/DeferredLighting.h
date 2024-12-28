#pragma once

#include "mc/_HeaderOutputPredefine.h"

class DeferredLighting {
public:
    // prevent constructor by default
    DeferredLighting& operator=(DeferredLighting const&);
    DeferredLighting(DeferredLighting const&);
    DeferredLighting();
};
