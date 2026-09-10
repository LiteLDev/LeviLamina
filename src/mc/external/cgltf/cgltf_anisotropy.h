#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct cgltf_anisotropy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk8c3d9d;
    ::ll::UntypedStorage<4, 4>  mUnk26a05c;
    ::ll::UntypedStorage<8, 48> mUnk19c615;
    // NOLINTEND

public:
    // prevent constructor by default
    cgltf_anisotropy& operator=(cgltf_anisotropy const&);
    cgltf_anisotropy(cgltf_anisotropy const&);
    cgltf_anisotropy();
};
