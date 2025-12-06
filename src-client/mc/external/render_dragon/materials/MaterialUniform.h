#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::materials {

struct MaterialUniform {
public:
    // MaterialUniform inner types declare
    // clang-format off
    struct BufferParameter;
    struct SamplerStateParameter;
    struct TextureParameter;
    struct UniformParameter;
    // clang-format on

    // MaterialUniform inner types define
    struct BufferParameter {};

    struct SamplerStateParameter {};

    struct TextureParameter {};

    struct UniformParameter {};
};

} // namespace dragon::materials
