#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace rtc {

class RecursiveCriticalSection {
public:
    // prevent constructor by default
    RecursiveCriticalSection& operator=(RecursiveCriticalSection const&);
    RecursiveCriticalSection(RecursiveCriticalSection const&);

public:
    // NOLINTBEGIN
    // symbol: ?Enter@RecursiveCriticalSection@rtc@@QEBAXXZ
    MCAPI void Enter() const;

    // symbol: ?Leave@RecursiveCriticalSection@rtc@@QEBAXXZ
    MCAPI void Leave() const;

    // symbol: ??0RecursiveCriticalSection@rtc@@QEAA@XZ
    MCAPI RecursiveCriticalSection();

    // symbol: ??1RecursiveCriticalSection@rtc@@QEAA@XZ
    MCAPI ~RecursiveCriticalSection();

    // NOLINTEND
};

}; // namespace rtc
