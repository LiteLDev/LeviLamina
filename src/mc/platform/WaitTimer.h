#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OS {

struct WaitTimer {
public:
    // prevent constructor by default
    WaitTimer& operator=(WaitTimer const&);
    WaitTimer(WaitTimer const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void Cancel();

    MCAPI uint64 GetAbsoluteTime(uint);

    MCAPI long Initialize(void*, void (*)(void*));

    MCAPI void Start(uint64);

    MCAPI void Terminate();

    MCAPI WaitTimer();

    MCAPI ~WaitTimer();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace OS
