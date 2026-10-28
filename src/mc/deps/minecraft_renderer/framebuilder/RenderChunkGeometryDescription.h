#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce::framebuilder {

struct RenderChunkGeometryDescription {
public:
    // RenderChunkGeometryDescription inner types declare
    // clang-format off
    struct PerChunkData;
    // clang-format on

    // RenderChunkGeometryDescription inner types define
    struct PerChunkData {
    public:
        // PerChunkData inner types declare
        // clang-format off
        struct DirectBuffers;
        struct LayerGroupBuffers;
        // clang-format on

        // PerChunkData inner types define
        struct DirectBuffers {};

        struct LayerGroupBuffers {};
    };
};

} // namespace mce::framebuilder
