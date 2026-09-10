#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct cgltf_light {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk5b5fb0;
    ::ll::UntypedStorage<4, 12> mUnk8d5a64;
    ::ll::UntypedStorage<4, 4>  mUnk383019;
    ::ll::UntypedStorage<4, 4>  mUnk717a98;
    ::ll::UntypedStorage<4, 4>  mUnkebdaa9;
    ::ll::UntypedStorage<4, 4>  mUnk30c784;
    ::ll::UntypedStorage<4, 4>  mUnka1800f;
    ::ll::UntypedStorage<8, 24> mUnk7fe691;
    // NOLINTEND

public:
    // prevent constructor by default
    cgltf_light& operator=(cgltf_light const&);
    cgltf_light(cgltf_light const&);
    cgltf_light();
};
