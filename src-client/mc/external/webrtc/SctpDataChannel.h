#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct SctpDataChannel {
public:
    // SctpDataChannel inner types declare
    // clang-format off
    struct ObserverAdapter;
    // clang-format on

    // SctpDataChannel inner types define
    enum class HandshakeState : uint {};

    struct ObserverAdapter {
    public:
        // ObserverAdapter inner types declare
        // clang-format off
        struct CachedGetters;
        // clang-format on

        // ObserverAdapter inner types define
        struct CachedGetters {};
    };
};

} // namespace webrtc
