#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct cgltf_mesh_gpu_instancing {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk6128f5;
    ::ll::UntypedStorage<8, 8> mUnk885337;
    // NOLINTEND

public:
    // prevent constructor by default
    cgltf_mesh_gpu_instancing& operator=(cgltf_mesh_gpu_instancing const&);
    cgltf_mesh_gpu_instancing(cgltf_mesh_gpu_instancing const&);
    cgltf_mesh_gpu_instancing();
};
