#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace DataStructures {

struct HashIndex {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint> primaryIndex;
    ::ll::TypedStorage<4, 4, uint> secondaryIndex;
    // NOLINTEND
};

} // namespace DataStructures
