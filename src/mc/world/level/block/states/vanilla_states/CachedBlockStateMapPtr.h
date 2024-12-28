#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace VanillaStates {

struct CachedBlockStateMapPtr {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk1cf07c;
    ::ll::UntypedStorage<4, 4> mUnkadf450;
    // NOLINTEND

public:
    // prevent constructor by default
    CachedBlockStateMapPtr& operator=(CachedBlockStateMapPtr const&);
    CachedBlockStateMapPtr(CachedBlockStateMapPtr const&);
    CachedBlockStateMapPtr();
};

} // namespace VanillaStates
