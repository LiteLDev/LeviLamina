#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace bgfx::d3d12 {

struct RendererContextD3D12 {
public:
    // RendererContextD3D12 inner types declare
    // clang-format off
    struct BLASGeometryInfo;
    struct BlasBuildRequest;
    struct BlasCompactionRequest;
    struct TlasBuildRequest;
    // clang-format on

    // RendererContextD3D12 inner types define
    enum class BufferHeapUpdateMode : uint {};

    struct BLASGeometryInfo {};

    struct BlasBuildRequest {};

    struct BlasCompactionRequest {};

    struct TlasBuildRequest {};
};

} // namespace bgfx::d3d12
