#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace PatternUtil {

struct PatternLayer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, uchar> mPatternId;
    ::ll::TypedStorage<1, 1, uchar> mColor;
    // NOLINTEND
};

} // namespace PatternUtil
