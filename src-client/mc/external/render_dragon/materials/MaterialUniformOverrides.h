#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::materials {

struct MaterialUniformOverrides {
public:
    // MaterialUniformOverrides inner types declare
    // clang-format off
    struct AccelerationStuctureData;
    struct BufferData;
    struct SamplerStateData;
    struct TextureData;
    template<typename T0> struct UniformData;
    struct UniformPair;
    // clang-format on

    // MaterialUniformOverrides inner types define
    struct AccelerationStuctureData {};

    struct BufferData {};

    struct SamplerStateData {};

    struct TextureData {};

    template <typename T0>
    struct UniformData {};

    struct UniformPair {};
};

} // namespace dragon::materials
