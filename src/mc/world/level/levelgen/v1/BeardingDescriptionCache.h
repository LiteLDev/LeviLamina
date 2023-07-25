#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BeardingDescriptionCache {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BEARDINGDESCRIPTIONCACHE
public:
    BeardingDescriptionCache& operator=(BeardingDescriptionCache const&) = delete;
    BeardingDescriptionCache(BeardingDescriptionCache const&)            = delete;
    BeardingDescriptionCache()                                           = delete;
#endif

public:
    /**
     * @symbol ??0BeardingDescriptionCache\@\@QEAA\@AEBVBoundingBox\@\@H\@Z
     */
    MCAPI BeardingDescriptionCache(class BoundingBox const&, int);
};
