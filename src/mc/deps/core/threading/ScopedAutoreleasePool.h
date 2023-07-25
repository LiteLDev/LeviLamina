#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ScopedAutoreleasePool {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCOPEDAUTORELEASEPOOL
public:
    ScopedAutoreleasePool& operator=(ScopedAutoreleasePool const&) = delete;
    ScopedAutoreleasePool(ScopedAutoreleasePool const&)            = delete;
#endif

public:
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
};
