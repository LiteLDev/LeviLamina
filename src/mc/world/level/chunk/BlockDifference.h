#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Block;
// clang-format on

struct BlockDifference {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Block const*> before;
    ::ll::TypedStorage<8, 8, ::Block const*> after;
    // NOLINTEND
};
