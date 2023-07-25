#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CachedComponentData {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CACHEDCOMPONENTDATA
public:
    CachedComponentData& operator=(CachedComponentData const&) = delete;
    CachedComponentData(CachedComponentData const&)            = delete;
    CachedComponentData()                                      = delete;
#endif

public:
    /**
     * @symbol ?cacheComponentData\@CachedComponentData\@\@QEAAXAEBVBlock\@\@\@Z
     */
    MCAPI void cacheComponentData(class Block const&);
    /**
     * @symbol ??1CachedComponentData\@\@QEAA\@XZ
     */
    MCAPI ~CachedComponentData();
};
