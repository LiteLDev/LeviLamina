#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CachedComponentData {

public:
    // prevent constructor by default
    CachedComponentData& operator=(CachedComponentData const&) = delete;
    CachedComponentData(CachedComponentData const&)            = delete;
    CachedComponentData()                                      = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?cacheComponentData\@CachedComponentData\@\@QEAAXAEBVBlock\@\@\@Z
     */
    MCAPI void cacheComponentData(class Block const&);
    /**
     * @symbol ??1CachedComponentData\@\@QEAA\@XZ
     */
    MCAPI ~CachedComponentData();
    // NOLINTEND
};
