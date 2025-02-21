#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BlockCraftingTableComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                           mGridSize;
    ::ll::TypedStorage<8, 32, ::std::string>                mTableName;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>> mCraftingTags;
    // NOLINTEND
};
