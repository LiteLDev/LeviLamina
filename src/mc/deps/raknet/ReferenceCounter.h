#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

class ReferenceCounter {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> refCount;
    // NOLINTEND
};

} // namespace RakNet
