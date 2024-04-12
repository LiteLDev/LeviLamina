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
    // symbol: ??0BeardingDescriptionCache@@QEAA@AEBVBoundingBox@@H@Z
    MCAPI BeardingDescriptionCache(class BoundingBox const& bb, int deltaY);

    // NOLINTEND
};
