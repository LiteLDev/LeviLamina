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
        MCNAPI ~Error();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct ScopedDeferrer {
    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~ScopedDeferrer();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct StreamReset {
    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~StreamReset();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void Prepare();

    MCNAPI void TriggerDeferred();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace dcsctp
