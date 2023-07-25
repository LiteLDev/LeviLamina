#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LevelCache {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEVELCACHE
public:
    LevelCache& operator=(LevelCache const&) = delete;
    LevelCache(LevelCache const&)            = delete;
    LevelCache()                             = delete;
#endif

public:
    /**
     * @symbol ??1LevelCache\@\@QEAA\@XZ
     */
    MCAPI ~LevelCache();
};
