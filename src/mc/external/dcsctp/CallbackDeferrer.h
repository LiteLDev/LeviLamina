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
        // prevent constructor by default
        Error& operator=(Error const&);
        Error(Error const&);
        Error();

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
        // prevent constructor by default
        ScopedDeferrer& operator=(ScopedDeferrer const&);
        ScopedDeferrer(ScopedDeferrer const&);
        ScopedDeferrer();

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
        // prevent constructor by default
        StreamReset& operator=(StreamReset const&);
        StreamReset(StreamReset const&);
        StreamReset();

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
    // prevent constructor by default
    CallbackDeferrer& operator=(CallbackDeferrer const&);
    CallbackDeferrer(CallbackDeferrer const&);
    CallbackDeferrer();

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
