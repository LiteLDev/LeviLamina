#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

class LocklessUint32_t {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, long volatile> value;
    // NOLINTEND
};

} // namespace RakNet
