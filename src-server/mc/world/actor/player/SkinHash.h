#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SkinHash {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, uint64> geoLength;
    ::ll::TypedStorage<8, 64, uint64[8]> shaData;
    // NOLINTEND

};
