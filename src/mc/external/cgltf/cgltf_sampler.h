#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct cgltf_sampler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnkddf5e4;
    ::ll::UntypedStorage<4, 4>  mUnk930a79;
    ::ll::UntypedStorage<4, 4>  mUnka26bdf;
    ::ll::UntypedStorage<4, 4>  mUnk59ae03;
    ::ll::UntypedStorage<4, 4>  mUnka3af7a;
    ::ll::UntypedStorage<8, 24> mUnkc7dd0d;
    ::ll::UntypedStorage<8, 8>  mUnk9f1f72;
    ::ll::UntypedStorage<8, 8>  mUnkb2470b;
    // NOLINTEND

public:
    // prevent constructor by default
    cgltf_sampler& operator=(cgltf_sampler const&);
    cgltf_sampler(cgltf_sampler const&);
    cgltf_sampler();
};
