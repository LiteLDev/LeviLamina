#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace VanillaStates {

struct CachedBlockStateMapPtr {
public:
    // prevent constructor by default
    CachedBlockStateMapPtr& operator=(CachedBlockStateMapPtr const&);
    CachedBlockStateMapPtr(CachedBlockStateMapPtr const&);
    CachedBlockStateMapPtr();
};

}; // namespace VanillaStates
