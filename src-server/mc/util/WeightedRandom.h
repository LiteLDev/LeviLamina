#pragma once

#include "mc/_HeaderOutputPredefine.h"

class WeightedRandom {
public:
    // WeightedRandom inner types declare
    // clang-format off
    class WeighedRandomItem;
    // clang-format on
    
    // WeightedRandom inner types define
    class WeighedRandomItem {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, int> mRandomWeight;
        // NOLINTEND
    
    };
    
};
