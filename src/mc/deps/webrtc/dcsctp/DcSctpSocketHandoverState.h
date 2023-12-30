#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dcsctp {

struct DcSctpSocketHandoverState {
public:
    // DcSctpSocketHandoverState inner types declare
    // clang-format off
    struct OutgoingStream;
    class Receive;
    // clang-format on

    // DcSctpSocketHandoverState inner types define
    struct OutgoingStream {
    public:
        // prevent constructor by default
        OutgoingStream& operator=(OutgoingStream const&);
        OutgoingStream(OutgoingStream const&);
        OutgoingStream();
    };

    class Receive {
    public:
        // prevent constructor by default
        Receive& operator=(Receive const&);
        Receive(Receive const&);
        Receive();

    public:
        // NOLINTBEGIN
        // symbol: ??1Receive@DcSctpSocketHandoverState@dcsctp@@QEAA@XZ
        MCAPI ~Receive();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    DcSctpSocketHandoverState& operator=(DcSctpSocketHandoverState const&);
    DcSctpSocketHandoverState(DcSctpSocketHandoverState const&);
    DcSctpSocketHandoverState();

public:
    // NOLINTBEGIN
    // symbol: ??1DcSctpSocketHandoverState@dcsctp@@QEAA@XZ
    MCAPI ~DcSctpSocketHandoverState();

    // NOLINTEND
};

}; // namespace dcsctp
