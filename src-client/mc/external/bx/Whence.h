#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace bx {

struct Whence {
public:
    // Whence inner types define
    enum class Enum : int {
        Begin   = 0,
        Current = 1,
        End     = 2,
    };
};

} // namespace bx
