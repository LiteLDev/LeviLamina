#pragma once

#include "mc/_HeaderOutputPredefine.h"

class HeightmapWrapper {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::vector<short> const*> mData;
    ::ll::TypedStorage<2, 2, short> mMinY;
    // NOLINTEND

};
