#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace renoir {

struct TraceSystemMask {
public:
    // TraceSystemMask inner types define
    enum class TraceSystemMaskEnum : int {
        RenoirFrontend = 64,
        RenoirBackend  = 128,
        All            = 65535,
    };
};

} // namespace renoir
