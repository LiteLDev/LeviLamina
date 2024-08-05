#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OS {

class WaitTimer {
public:
    // prevent constructor by default
    WaitTimer& operator=(WaitTimer const&);
    WaitTimer(WaitTimer const&);

public:
    // NOLINTBEGIN
    MCAPI void Cancel();

    MCAPI uint64 GetAbsoluteTime(uint);

    MCAPI long Initialize(void*, void (*)(void*));

    MCAPI void Start(uint64);

    MCAPI void Terminate();

    MCAPI WaitTimer();

    MCAPI ~WaitTimer();

    // NOLINTEND
};

}; // namespace OS
