#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct cgltf_diffuse_transmission {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnk183736;
    ::ll::UntypedStorage<4, 4>  mUnkec05af;
    ::ll::UntypedStorage<4, 12> mUnkcc7363;
    ::ll::UntypedStorage<8, 48> mUnkc57162;
    // NOLINTEND

public:
    // prevent constructor by default
    cgltf_diffuse_transmission& operator=(cgltf_diffuse_transmission const&);
    cgltf_diffuse_transmission(cgltf_diffuse_transmission const&);
    cgltf_diffuse_transmission();
};
