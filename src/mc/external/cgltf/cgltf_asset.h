#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct cgltf_asset {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk6283ea;
    ::ll::UntypedStorage<8, 8>  mUnk4f4992;
    ::ll::UntypedStorage<8, 8>  mUnkeb5379;
    ::ll::UntypedStorage<8, 8>  mUnk48ada4;
    ::ll::UntypedStorage<8, 24> mUnk29ea87;
    ::ll::UntypedStorage<8, 8>  mUnk248026;
    ::ll::UntypedStorage<8, 8>  mUnk49619e;
    // NOLINTEND

public:
    // prevent constructor by default
    cgltf_asset& operator=(cgltf_asset const&);
    cgltf_asset(cgltf_asset const&);
    cgltf_asset();
};
