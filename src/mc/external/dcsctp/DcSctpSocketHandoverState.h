#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dcsctp {

struct DcSctpSocketHandoverState {
public:
    // DcSctpSocketHandoverState inner types declare
    // clang-format off
    struct OutgoingStream;
    struct Receive;
    // clang-format on

    // DcSctpSocketHandoverState inner types define
    struct OutgoingStream {};

    struct Receive {
    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~Receive();
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
    MCAPI ~DcSctpSocketHandoverState();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace dcsctp
