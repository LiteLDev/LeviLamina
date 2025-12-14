#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/chunk/sub_chunk_storage_unit/Type.h"

namespace SubChunkStorageUnit {

union SubChunkStorageFormat {
public:
    // member variables
    // NOLINTBEGIN
    bool                           network : 1;
    ::SubChunkStorageUnit::Type    type    : 7;
    ::ll::TypedStorage<1, 1, char> raw;
    // NOLINTEND
};
} // namespace SubChunkStorageUnit
