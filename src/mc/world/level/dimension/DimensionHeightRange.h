#pragma once

#include "mc/_HeaderOutputPredefine.h"

class DimensionHeightRange {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 2, short> mMin;
    ::ll::TypedStorage<2, 2, short> mMax;
    // NOLINTEND

public:
    // prevent constructor by default
    DimensionHeightRange& operator=(DimensionHeightRange const&);
    DimensionHeightRange(DimensionHeightRange const&);
    DimensionHeightRange();
};
