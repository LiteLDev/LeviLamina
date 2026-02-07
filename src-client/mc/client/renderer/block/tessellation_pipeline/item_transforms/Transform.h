#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/block/tessellation_pipeline/item_transforms/Type.h"
#include "mc/deps/core/math/Matrix.h"

namespace ClientBlockPipeline::ItemTransforms {

struct Transform {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::ClientBlockPipeline::ItemTransforms::Type> mType;
    ::ll::TypedStorage<4, 64, ::Matrix>                                   mTransform;
    // NOLINTEND
};

} // namespace ClientBlockPipeline::ItemTransforms
