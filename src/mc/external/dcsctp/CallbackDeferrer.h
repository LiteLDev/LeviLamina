#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dcsctp {

class CallbackDeferrer {
public:
    // CallbackDeferrer inner types declare
    // clang-format off
    struct Error;
    struct ScopedDeferrer;
    struct StreamReset;
    // clang-format on

    // CallbackDeferrer inner types define
    struct Error {
    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~Error();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

    struct ScopedDeferrer {
    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~ScopedDeferrer();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

    struct StreamReset {
    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~StreamReset();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void Prepare();

    MCAPI void TriggerDeferred();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace dcsctp
