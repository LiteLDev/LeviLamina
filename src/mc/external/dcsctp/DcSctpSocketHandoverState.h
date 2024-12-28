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
    struct OutgoingStream {
    public:
        // prevent constructor by default
        OutgoingStream& operator=(OutgoingStream const&);
        OutgoingStream(OutgoingStream const&);
        OutgoingStream();
    };

    struct Receive {
    public:
        // prevent constructor by default
        Receive& operator=(Receive const&);
        Receive(Receive const&);
        Receive();

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
    // prevent constructor by default
    DcSctpSocketHandoverState& operator=(DcSctpSocketHandoverState const&);
    DcSctpSocketHandoverState(DcSctpSocketHandoverState const&);
    DcSctpSocketHandoverState();

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
