#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::memory {

struct BufferSource {
public:
    // BufferSource inner types declare
    // clang-format off
    struct LifetimeToken;
    struct UseTracker;
    // clang-format on

    // BufferSource inner types define
    struct LifetimeToken {};

    struct UseTracker {};
};

} // namespace dragon::memory
