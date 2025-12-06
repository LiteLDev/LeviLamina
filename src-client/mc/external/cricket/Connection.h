#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cricket {

struct Connection {
public:
    // Connection inner types declare
    // clang-format off
    struct ConnectionRequest;
    struct SentPing;
    // clang-format on

    // Connection inner types define
    enum class WriteState : uint {};

    struct ConnectionRequest {};

    struct SentPing {};
};

} // namespace cricket
