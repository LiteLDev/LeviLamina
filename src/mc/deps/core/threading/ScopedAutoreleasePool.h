#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ScopedAutoreleasePool {

public:
    // prevent constructor by default
    ScopedAutoreleasePool& operator=(ScopedAutoreleasePool const&) = delete;
    ScopedAutoreleasePool(ScopedAutoreleasePool const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0ScopedAutoreleasePool\@\@QEAA\@XZ
     */
    MCAPI ScopedAutoreleasePool();
    /**
     * @symbol ?drain\@ScopedAutoreleasePool\@\@QEAAXXZ
     */
    MCAPI void drain();
    /**
     * @symbol ??1ScopedAutoreleasePool\@\@QEAA\@XZ
     */
    MCAPI ~ScopedAutoreleasePool();
    // NOLINTEND
};
