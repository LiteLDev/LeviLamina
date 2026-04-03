#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct DuplicateKey {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, uint64> index;
    ::ll::TypedStorage<4, 4, int>    key;
    // NOLINTEND
};
