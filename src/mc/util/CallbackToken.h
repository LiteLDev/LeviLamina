#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CallbackToken {
public:
    // prevent constructor by default
    CallbackToken& operator=(CallbackToken const&);
    CallbackToken(CallbackToken const&);

public:
    // NOLINTBEGIN
    MCAPI CallbackToken();

    MCAPI explicit CallbackToken(std::weak_ptr<class CallbackTokenCancelState> cancelState);

    MCAPI void cancelCallback();

    MCAPI class CallbackToken& operator=(class CallbackToken&& rhs);

    MCAPI void release();

    MCAPI ~CallbackToken();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    // NOLINTEND
};
