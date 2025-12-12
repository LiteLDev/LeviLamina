#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::framerenderer {

struct CommandContext {
public:
    // CommandContext inner types declare
    // clang-format off
    struct MaterialAccelerationStructureBinding;
    struct MaterialBufferBinding;
    struct MaterialTextureBinding;
    // clang-format on

    // CommandContext inner types define
    struct MaterialAccelerationStructureBinding {};

    struct MaterialBufferBinding {};

    struct MaterialTextureBinding {};
};

} // namespace dragon::framerenderer
