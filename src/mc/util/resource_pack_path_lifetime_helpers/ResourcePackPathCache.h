#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ResourcePackPathLifetimeHelpers {

class ResourcePackPathCache {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk7cbdf7;
    // NOLINTEND

public:
    // prevent constructor by default
    ResourcePackPathCache& operator=(ResourcePackPathCache const&);
    ResourcePackPathCache(ResourcePackPathCache const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ResourcePackPathCache();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};

} // namespace ResourcePackPathLifetimeHelpers
