#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

struct FLR_MemoryBlock {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, char*> flrMemoryBlock;
    // NOLINTEND
};

} // namespace RakNet
