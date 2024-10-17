#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BeardingDescriptionCache {
public:
    // prevent constructor by default
    BeardingDescriptionCache& operator=(BeardingDescriptionCache const&);
    BeardingDescriptionCache(BeardingDescriptionCache const&);
    BeardingDescriptionCache();

public:
    // NOLINTBEGIN
    MCAPI BeardingDescriptionCache(class BoundingBox const& bb, int deltaY);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(class BoundingBox const& bb, int deltaY);

    // NOLINTEND
};
