#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/BrightnessPair.h"

namespace ClientBlockPipeline::SmoothLightBitHelpers {

struct CachedData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>                  solidBits;
    ::ll::TypedStorage<4, 4, uint>                  blockedGrid;
    ::ll::TypedStorage<1, 54, ::BrightnessPair[27]> brightness;
    ::ll::TypedStorage<4, 108, float[27]>           ao;
    // NOLINTEND
};

} // namespace ClientBlockPipeline::SmoothLightBitHelpers
