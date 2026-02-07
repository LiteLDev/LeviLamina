#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace bgfx {

struct Context {
public:
    // Context inner types declare
    // clang-format off
    struct DynamicVertexAllocation;
    struct ShaderRef;
    struct ProgramRef;
    struct UniformRef;
    struct TextureRef;
    struct ShaderBufferRef;
    struct FrameBufferRef;
    // clang-format on

    // Context inner types define
    struct DynamicVertexAllocation {};

    struct ShaderRef {};

    struct ProgramRef {};

    struct UniformRef {};

    struct TextureRef {};

    struct ShaderBufferRef {};

    struct FrameBufferRef {
    public:
        // FrameBufferRef inner types define
        union un {};
    };
};

} // namespace bgfx
