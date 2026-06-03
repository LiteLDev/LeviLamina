#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace bx {

struct DiyFp {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, uint64> f;
    ::ll::TypedStorage<4, 4, int>    e;
    // NOLINTEND
};

} // namespace bx
