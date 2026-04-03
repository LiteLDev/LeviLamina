#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace rendergraph {

class RenderOrder {
public:
    // RenderOrder inner types declare
    // clang-format off
    struct PassRegistry;
    struct PassStorage;
    struct ResourceEventRegistry;
    struct ResourceStorage;
    // clang-format on

    // RenderOrder inner types define
    struct PassRegistry {
    public:
        // PassRegistry inner types declare
        // clang-format off
        struct FrameBufferTextureBinding;
        struct PassAttributes;
        // clang-format on

        // PassRegistry inner types define
        enum class FrameBufferRequirement : int {};

        struct FrameBufferTextureBinding {};

        struct PassAttributes {};
    };

    struct PassStorage {};

    struct ResourceEventRegistry {};

    struct ResourceStorage {};
};

} // namespace rendergraph
