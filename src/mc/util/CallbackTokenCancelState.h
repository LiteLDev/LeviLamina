#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CallbackTokenCancelState {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnk88860f;
    // NOLINTEND

public:
    // prevent constructor by default
    CallbackTokenCancelState& operator=(CallbackTokenCancelState const&);
    CallbackTokenCancelState(CallbackTokenCancelState const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CallbackTokenCancelState();

#ifdef LL_PLAT_C
    MCNAPI void cancel();
#endif

    MCNAPI bool wasCanceled() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};
