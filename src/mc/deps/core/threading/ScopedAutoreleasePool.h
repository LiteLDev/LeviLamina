#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ScopedAutoreleasePool {
public:
    // prevent constructor by default
    ScopedAutoreleasePool& operator=(ScopedAutoreleasePool const&);
    ScopedAutoreleasePool(ScopedAutoreleasePool const&);

public:
    // NOLINTBEGIN
    // symbol: ??0ScopedAutoreleasePool@@QEAA@XZ
    MCAPI ScopedAutoreleasePool();

    // symbol: ?drain@ScopedAutoreleasePool@@QEAAXXZ
    MCAPI void drain();

    // symbol: ?drainNow@ScopedAutoreleasePool@@QEAAXXZ
    MCAPI void drainNow();

    // symbol: ?reset@ScopedAutoreleasePool@@QEAAXXZ
    MCAPI void reset();

    // symbol: ??1ScopedAutoreleasePool@@QEAA@XZ
    MCAPI ~ScopedAutoreleasePool();

    // NOLINTEND
};
