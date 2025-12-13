#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::frameobject {

struct IntraFrameAllocatorContainer {
public:
    // IntraFrameAllocatorContainer inner types declare
    // clang-format off
    struct BufferCompare;
    struct BufferHasher;
    struct ThreadLocalData;
    // clang-format on

    // IntraFrameAllocatorContainer inner types define
    struct BufferCompare {};

    struct BufferHasher {};

    struct ThreadLocalData {};
};

} // namespace dragon::frameobject
