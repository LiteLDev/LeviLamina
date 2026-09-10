#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct cgltf_iridescence {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk3f0ed5;
    ::ll::UntypedStorage<8, 48> mUnk82ba67;
    ::ll::UntypedStorage<4, 4>  mUnkec36ce;
    ::ll::UntypedStorage<4, 4>  mUnkab0e40;
    ::ll::UntypedStorage<4, 4>  mUnk495a9b;
    ::ll::UntypedStorage<8, 48> mUnk9aff57;
    // NOLINTEND

public:
    // prevent constructor by default
    cgltf_iridescence& operator=(cgltf_iridescence const&);
    cgltf_iridescence(cgltf_iridescence const&);
    cgltf_iridescence();
};
