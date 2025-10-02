#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

struct uint24_t {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint> val;
    // NOLINTEND
};

} // namespace RakNet
