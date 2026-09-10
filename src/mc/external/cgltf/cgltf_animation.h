#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct cgltf_animation {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk30bb33;
    ::ll::UntypedStorage<8, 8>  mUnkda648c;
    ::ll::UntypedStorage<8, 8>  mUnk12f540;
    ::ll::UntypedStorage<8, 8>  mUnk9d6d1f;
    ::ll::UntypedStorage<8, 8>  mUnk1caaf1;
    ::ll::UntypedStorage<8, 24> mUnk2bae15;
    ::ll::UntypedStorage<8, 8>  mUnk635ebc;
    ::ll::UntypedStorage<8, 8>  mUnk652706;
    // NOLINTEND

public:
    // prevent constructor by default
    cgltf_animation& operator=(cgltf_animation const&);
    cgltf_animation(cgltf_animation const&);
    cgltf_animation();
};
