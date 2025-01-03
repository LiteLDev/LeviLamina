#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Block;
// clang-format on

struct WeightedBlock {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Block const&> mBlock;
    ::ll::TypedStorage<4, 4, int const>      mWeight;
    // NOLINTEND
};
