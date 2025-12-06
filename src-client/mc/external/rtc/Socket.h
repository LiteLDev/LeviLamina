#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace rtc {

struct Socket {
public:
    // Socket inner types declare
    // clang-format off
    struct ReceiveBuffer;
    // clang-format on

    // Socket inner types define
    enum class ConnState : uint {};

    enum class Option : uint {};

    struct ReceiveBuffer {};
};

} // namespace rtc
