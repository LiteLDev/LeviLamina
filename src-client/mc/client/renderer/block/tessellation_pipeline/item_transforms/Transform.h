#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Matrix.h"
#include "mc/world/item/ItemTransformType.h"

namespace ClientBlockPipeline::ItemTransforms {

struct Transform {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::ItemTransformType> mType;
    ::ll::TypedStorage<4, 64, ::Matrix>           mTransform;
    // NOLINTEND
};

} // namespace ClientBlockPipeline::ItemTransforms
