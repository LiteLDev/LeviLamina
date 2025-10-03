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
        ::ll::UntypedStorage<4, 4> mUnkcb04d8;
        // NOLINTEND

    public:
        // prevent constructor by default
        WeighedRandomItem& operator=(WeighedRandomItem const&);
        WeighedRandomItem(WeighedRandomItem const&);
        WeighedRandomItem();
    };
};
