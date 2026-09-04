#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace NetherNet::P2P {

struct NetworkID {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, uint64> mValue;
    // NOLINTEND
};

} // namespace NetherNet::P2P
