#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ClientBlockPipeline::SurfaceExtractionStepConstants {

struct QuadData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 16, ::std::array<int, 4>> vertices;
    ::ll::TypedStorage<1, 1, uchar>                 facing;
    // NOLINTEND
};

} // namespace ClientBlockPipeline::SurfaceExtractionStepConstants
