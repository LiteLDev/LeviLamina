#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace br::worldgen {

struct DimensionPadding {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint> mTop;
    ::ll::TypedStorage<4, 4, uint> mBottom;
    // NOLINTEND
};

} // namespace br::worldgen
