#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace bgfx::d3d12 {

struct RendererContextD3D12 {
public:
    // RendererContextD3D12 inner types declare
    // clang-format off
    struct TlasBuildRequest;
    struct BlasBuildRequest;
    struct BlasCompactionRequest;
    struct BLASGeometryInfo;
    struct PresentTimings;
    // clang-format on

    // RendererContextD3D12 inner types define
    enum class BufferHeapUpdateMode : int {};

    struct TlasBuildRequest {};

    struct BlasBuildRequest {};

    struct BlasCompactionRequest {};

    struct BLASGeometryInfo {};

    struct PresentTimings {};
};

} // namespace bgfx::d3d12
