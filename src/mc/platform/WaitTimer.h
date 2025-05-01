#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OS {

struct WaitTimer {
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void Cancel();

    MCNAPI uint64 GetAbsoluteTime(uint);

    MCNAPI long Initialize(void*, void (*)(void*));

    MCNAPI void Start(uint64);

    MCNAPI void Terminate();

    MCNAPI WaitTimer();

    MCNAPI ~WaitTimer();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace OS
