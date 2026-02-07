#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace bgfx {

struct NonLocalAllocator {
public:
    // NonLocalAllocator inner types declare
    // clang-format off
    struct Allocation;
    struct Free;
    // clang-format on

    // NonLocalAllocator inner types define
    struct Allocation {};

    struct Free {};
};

} // namespace bgfx
