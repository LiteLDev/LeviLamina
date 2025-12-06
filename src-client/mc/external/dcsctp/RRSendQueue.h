#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dcsctp {

struct RRSendQueue {
public:
    // RRSendQueue inner types declare
    // clang-format off
    struct MessageAttributes;
    struct OutgoingStream;
    struct ThresholdWatcher;
    // clang-format on

    // RRSendQueue inner types define
    struct MessageAttributes {};

    struct OutgoingStream {
    public:
        // OutgoingStream inner types declare
        // clang-format off
        struct Item;
        // clang-format on

        // OutgoingStream inner types define
        enum class PauseState : uint {};

        struct Item {};
    };

    struct ThresholdWatcher {};
};

} // namespace dcsctp
