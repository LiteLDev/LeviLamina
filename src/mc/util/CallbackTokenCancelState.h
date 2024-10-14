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
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    // NOLINTEND
};
