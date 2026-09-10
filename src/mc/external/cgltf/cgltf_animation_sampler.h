#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct cgltf_animation_sampler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk4e1825;
    ::ll::UntypedStorage<8, 8>  mUnk568c8c;
    ::ll::UntypedStorage<4, 4>  mUnk88eda3;
    ::ll::UntypedStorage<8, 24> mUnk558a61;
    ::ll::UntypedStorage<8, 8>  mUnk31c6d0;
    ::ll::UntypedStorage<8, 8>  mUnk3ed663;
    // NOLINTEND

public:
    // prevent constructor by default
    cgltf_animation_sampler& operator=(cgltf_animation_sampler const&);
    cgltf_animation_sampler(cgltf_animation_sampler const&);
    cgltf_animation_sampler();
};
