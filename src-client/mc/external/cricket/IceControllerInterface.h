#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cricket {

struct IceControllerInterface {
public:
    // IceControllerInterface inner types declare
    // clang-format off
    struct PingResult;
    struct SwitchResult;
    // clang-format on

    // IceControllerInterface inner types define
    struct PingResult {};

    struct SwitchResult {};
};

} // namespace cricket
