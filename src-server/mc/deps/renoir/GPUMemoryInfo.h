#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace renoir {

struct GPUMemoryInfo {
public:
    // GPUMemoryInfo inner types declare
    // clang-format off
    struct ResourceInfo;
    struct ResourceArray;
    struct BufferResourceInfo;
    struct BufferArray;
    // clang-format on

    // GPUMemoryInfo inner types define
    struct ResourceInfo {};

    struct ResourceArray {};

    struct BufferResourceInfo {};

    struct BufferArray {};
};

} // namespace renoir
