#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dcsctp {

struct DcSctpSocketHandoverState {
public:
    // DcSctpSocketHandoverState inner types declare
    // clang-format off
    struct OrderedStream;
    struct OutgoingStream;
    struct Receive;
    struct UnorderedStream;
    // clang-format on

    // DcSctpSocketHandoverState inner types define
    struct OrderedStream {};

    struct OutgoingStream {};

    struct Receive {
    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~Receive();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct UnorderedStream {};

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~DcSctpSocketHandoverState();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace dcsctp
