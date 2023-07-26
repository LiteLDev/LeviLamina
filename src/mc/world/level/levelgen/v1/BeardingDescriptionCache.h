#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BeardingDescriptionCache {

public:
    // prevent constructor by default
    BeardingDescriptionCache& operator=(BeardingDescriptionCache const&) = delete;
    BeardingDescriptionCache(BeardingDescriptionCache const&)            = delete;
    BeardingDescriptionCache()                                           = delete;

public:
    /**
     * @symbol ??0BeardingDescriptionCache\@\@QEAA\@AEBVBoundingBox\@\@H\@Z
     */
    MCAPI BeardingDescriptionCache(class BoundingBox const&, int); // NOLINT
};
