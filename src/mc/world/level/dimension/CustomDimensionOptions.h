#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct CustomDimensionOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 2, short>          mMinY;
    ::ll::TypedStorage<2, 2, short>          mHeightRange;
    ::ll::TypedStorage<8, 32, ::std::string> mDefaultBiome;
    // NOLINTEND
};
