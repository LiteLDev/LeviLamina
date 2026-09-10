#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct cgltf_camera_perspective {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk690166;
    ::ll::UntypedStorage<4, 4>  mUnk28e7af;
    ::ll::UntypedStorage<4, 4>  mUnkf4a705;
    ::ll::UntypedStorage<4, 4>  mUnk3b5234;
    ::ll::UntypedStorage<4, 4>  mUnke794c6;
    ::ll::UntypedStorage<4, 4>  mUnk6013ba;
    ::ll::UntypedStorage<8, 24> mUnkb96c99;
    // NOLINTEND

public:
    // prevent constructor by default
    cgltf_camera_perspective& operator=(cgltf_camera_perspective const&);
    cgltf_camera_perspective(cgltf_camera_perspective const&);
    cgltf_camera_perspective();
};
