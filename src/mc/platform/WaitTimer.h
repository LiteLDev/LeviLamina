#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OS {

class WaitTimer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk19a2df;
    // NOLINTEND

public:
    // prevent constructor by default
    WaitTimer& operator=(WaitTimer const&);
    WaitTimer(WaitTimer const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void Cancel();

    MCNAPI uint64 GetAbsoluteTime(uint msFromNow);

    MCNAPI long Initialize(void* context, void (*callback)(void*));

    MCNAPI void Start(uint64 absoluteTime);

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
