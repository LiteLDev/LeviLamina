#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cg {

struct RenderFeaturesConfiguration {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> MSAAEnabled;
    ::ll::TypedStorage<1, 1, bool> TexelAAEnabled;
    ::ll::TypedStorage<1, 1, bool> AlphaToCoverageSupported;
    ::ll::TypedStorage<1, 1, bool> VertexFormatRGBA8Supported;
    ::ll::TypedStorage<1, 1, bool> VertexShaderInstancingSupported;
    ::ll::TypedStorage<1, 1, bool> LargeVertexShaderUniforms;
    // NOLINTEND
};

} // namespace cg
