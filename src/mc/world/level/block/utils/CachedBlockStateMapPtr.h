#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace VanillaStates {

struct CachedBlockStateMapPtr {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VANILLASTATES_CACHEDBLOCKSTATEMAPPTR
public:
    CachedBlockStateMapPtr& operator=(CachedBlockStateMapPtr const&) = delete;
    CachedBlockStateMapPtr(CachedBlockStateMapPtr const&)            = delete;
    CachedBlockStateMapPtr()                                         = delete;
#endif

public:
};

}; // namespace VanillaStates
