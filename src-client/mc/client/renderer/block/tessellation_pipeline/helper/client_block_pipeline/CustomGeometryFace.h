#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/block/tessellation_pipeline/UvTransform.h"

namespace ClientBlockPipeline {

struct CustomGeometryFace {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                                 mMaterialInstance;
    ::ll::TypedStorage<4, 32, ::ClientBlockPipeline::UvTransform> mUvTransform;
    // NOLINTEND
};

} // namespace ClientBlockPipeline
