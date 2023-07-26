#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ScopedAutoreleasePool {

public:
    // prevent constructor by default
    ScopedAutoreleasePool& operator=(ScopedAutoreleasePool const&) = delete;
    ScopedAutoreleasePool(ScopedAutoreleasePool const&)            = delete;

public:
    /**
     * @symbol ??0ScopedAutoreleasePool\@\@QEAA\@XZ
     */
    MCAPI ScopedAutoreleasePool(); // NOLINT
    /**
     * @symbol ?drain\@ScopedAutoreleasePool\@\@QEAAXXZ
     */
    MCAPI void drain(); // NOLINT
    /**
     * @symbol ??1ScopedAutoreleasePool\@\@QEAA\@XZ
     */
    MCAPI ~ScopedAutoreleasePool(); // NOLINT
};
