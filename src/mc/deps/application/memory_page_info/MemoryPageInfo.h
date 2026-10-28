#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Memory {

struct MemoryPageInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, uint64> mExecutableBytes;
    // NOLINTEND
};

} // namespace Memory
