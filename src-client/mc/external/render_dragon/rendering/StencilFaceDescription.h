#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/render_dragon/rendering/ComparisonFunction.h"
#include "mc/external/render_dragon/rendering/StencilOp.h"

namespace dragon::rendering {

struct StencilFaceDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::dragon::rendering::ComparisonFunction> mComparisonFunc;
    ::ll::TypedStorage<4, 4, ::dragon::rendering::StencilOp>          mDepthFailOp;
    ::ll::TypedStorage<4, 4, ::dragon::rendering::StencilOp>          mPassOp;
    ::ll::TypedStorage<4, 4, ::dragon::rendering::StencilOp>          mFailOp;
    // NOLINTEND
};

} // namespace dragon::rendering
