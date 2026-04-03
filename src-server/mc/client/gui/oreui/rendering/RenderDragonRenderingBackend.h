#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OreUI {

class RenderDragonRenderingBackend {
public:
    // RenderDragonRenderingBackend inner types declare
    // clang-format off
    struct TextureData;
    struct VertexBuffer;
    struct GetGamefaceStride;
    struct IndexBuffer;
    struct ConstantBuffer;
    // clang-format on

    // RenderDragonRenderingBackend inner types define
    struct TextureData {};

    struct VertexBuffer {
    public:
        // VertexBuffer inner types declare
        // clang-format off
        struct DragonVertexBuffer;
        struct DragonInstanceData;
        // clang-format on

        // VertexBuffer inner types define
        struct DragonVertexBuffer {};

        struct DragonInstanceData {};
    };

    struct GetGamefaceStride {};

    struct IndexBuffer {};

    struct ConstantBuffer {};
};

} // namespace OreUI
