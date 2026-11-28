#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core_graphics/enums/ComparisonFunc.h"
#include "mc/deps/core_graphics/enums/StencilOp.h"

namespace mce {

struct StencilFaceDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::mce::ComparisonFunc> stencilFunc;
    ::ll::TypedStorage<1, 1, ::mce::StencilOp>      stencilDepthFailOp;
    ::ll::TypedStorage<1, 1, ::mce::StencilOp>      stencilPassOp;
    ::ll::TypedStorage<1, 1, ::mce::StencilOp>      stencilFailOp;
    // NOLINTEND
};

} // namespace mce
