#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dcsctp {

struct DcSctpSocketHandoverState {
public:
    // DcSctpSocketHandoverState inner types declare
    // clang-format off
    struct Capabilities;
    struct OrderedStream;
    struct OutgoingStream;
    struct Receive;
    struct Transmission;
    struct UnorderedStream;
    // clang-format on

    // DcSctpSocketHandoverState inner types define
    enum class SocketState : uint {};

    struct Capabilities {};

    struct OrderedStream {};

    struct OutgoingStream {};

    struct Receive {};

    struct Transmission {};

    struct UnorderedStream {};
};

} // namespace dcsctp
