#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CallbackTokenCancelState {
public:
    // prevent constructor by default
    CallbackTokenCancelState& operator=(CallbackTokenCancelState const&);
    CallbackTokenCancelState(CallbackTokenCancelState const&);

public:
    // NOLINTBEGIN
    MCAPI CallbackTokenCancelState();

    MCAPI bool wasCanceled() const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$();

    // NOLINTEND
};
