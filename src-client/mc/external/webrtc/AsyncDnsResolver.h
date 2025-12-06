#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct AsyncDnsResolver {
public:
    // AsyncDnsResolver inner types declare
    // clang-format off
    struct State;
    // clang-format on

    // AsyncDnsResolver inner types define
    struct State {
    public:
        // State inner types define
        enum class Status : uint {};
    };
};

} // namespace webrtc
