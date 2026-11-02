#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace texd {

struct CompressedBlockInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>   width;
    ::ll::TypedStorage<4, 4, uint>   height;
    ::ll::TypedStorage<8, 8, uint64> sizeInBytes;
    // NOLINTEND
};

} // namespace texd
