#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec2.h"

namespace ClientBlockPipeline::SmoothLightBitHelpers {

struct SampledLightValues {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 8, ::Vec2> mLightUvs;
    ::ll::TypedStorage<4, 4, float>  mAoValue;
    // NOLINTEND
};

} // namespace ClientBlockPipeline::SmoothLightBitHelpers
