#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace bx {

struct ErrorResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint> code;
    // NOLINTEND
};

} // namespace bx
