#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cricket {

struct TurnPort {
public:
    // TurnPort inner types declare
    // clang-format off
    struct CallbacksForTest;
    // clang-format on

    // TurnPort inner types define
    enum class PortState : uint {};

    struct CallbacksForTest {};
};

} // namespace cricket
