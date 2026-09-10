#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct cgltf_camera {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnkc6e9a1;
    ::ll::UntypedStorage<4, 4>  mUnk8b3b52;
    ::ll::UntypedStorage<8, 48> mUnk40351e;
    ::ll::UntypedStorage<8, 24> mUnkb87f10;
    ::ll::UntypedStorage<8, 8>  mUnkf8dd95;
    ::ll::UntypedStorage<8, 8>  mUnkf2087c;
    // NOLINTEND

public:
    // prevent constructor by default
    cgltf_camera& operator=(cgltf_camera const&);
    cgltf_camera(cgltf_camera const&);
    cgltf_camera();
};
