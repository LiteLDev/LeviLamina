#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace LightPropagation {

class VoxelVolumeBuffersHandler {
public:
    // VoxelVolumeBuffersHandler inner types declare
    // clang-format off
    struct GpuUploadSnapshot;
    struct VolumeBlob;
    // clang-format on

    // VoxelVolumeBuffersHandler inner types define
    struct GpuUploadSnapshot {
    public:
        // GpuUploadSnapshot inner types declare
        // clang-format off
        struct VolumeUpload;
        // clang-format on

        // GpuUploadSnapshot inner types define
        struct VolumeUpload {};
    };

    struct VolumeBlob {};
};

} // namespace LightPropagation
