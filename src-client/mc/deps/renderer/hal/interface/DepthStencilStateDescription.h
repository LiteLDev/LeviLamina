#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core_graphics/enums/ComparisonFunc.h"
#include "mc/deps/core_graphics/enums/DepthWriteMask.h"
#include "mc/deps/renderer/hal/interface/StencilFaceDescription.h"

namespace mce {

struct DepthStencilStateDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                          depthTestEnabled;
    ::ll::TypedStorage<1, 1, bool>                          stencilTestEnabled;
    ::ll::TypedStorage<1, 1, ::mce::ComparisonFunc>         depthFunc;
    ::ll::TypedStorage<1, 4, ::mce::StencilFaceDescription> frontFace;
    ::ll::TypedStorage<1, 4, ::mce::StencilFaceDescription> backFace;
    ::ll::TypedStorage<1, 1, ::mce::DepthWriteMask>         depthWriteMask;
    ::ll::TypedStorage<4, 4, uint>                          stencilReadMask;
    ::ll::TypedStorage<4, 4, uint>                          stencilWriteMask;
    ::ll::TypedStorage<1, 1, uchar>                         stencilRef;
    ::ll::TypedStorage<1, 1, uchar>                         originalStencilRef;
    ::ll::TypedStorage<1, 1, bool>                          overwroteStencilRef;
    // NOLINTEND
};

} // namespace mce
