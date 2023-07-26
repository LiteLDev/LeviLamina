#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace VanillaStates {

struct CachedBlockStateMapPtr {

public:
    // prevent constructor by default
    CachedBlockStateMapPtr& operator=(CachedBlockStateMapPtr const&) = delete;
    CachedBlockStateMapPtr(CachedBlockStateMapPtr const&)            = delete;
    CachedBlockStateMapPtr()                                         = delete;
};

}; // namespace VanillaStates
