#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class HashedString;
// clang-format on

struct WeightedBlockName {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::HashedString const&> mBlockName;
    ::ll::TypedStorage<4, 4, int const> mWeight;
    // NOLINTEND

public:
    // prevent constructor by default
    WeightedBlockName& operator=(WeightedBlockName const&);
    WeightedBlockName(WeightedBlockName const&);
    WeightedBlockName();

};
