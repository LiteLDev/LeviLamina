#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct cgltf_camera_orthographic {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk558a2d;
    ::ll::UntypedStorage<4, 4>  mUnk8c03db;
    ::ll::UntypedStorage<4, 4>  mUnk534a42;
    ::ll::UntypedStorage<4, 4>  mUnk524a20;
    ::ll::UntypedStorage<8, 24> mUnk7d096e;
    // NOLINTEND

public:
    // prevent constructor by default
    cgltf_camera_orthographic& operator=(cgltf_camera_orthographic const&);
    cgltf_camera_orthographic(cgltf_camera_orthographic const&);
    cgltf_camera_orthographic();
};
