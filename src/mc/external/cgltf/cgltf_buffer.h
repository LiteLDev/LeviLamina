#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct cgltf_buffer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnkdb833f;
    ::ll::UntypedStorage<8, 8>  mUnk4af3da;
    ::ll::UntypedStorage<8, 8>  mUnk355c20;
    ::ll::UntypedStorage<8, 8>  mUnkb5a8d5;
    ::ll::UntypedStorage<4, 4>  mUnk4c8382;
    ::ll::UntypedStorage<8, 24> mUnke204a5;
    ::ll::UntypedStorage<8, 8>  mUnkb4dde9;
    ::ll::UntypedStorage<8, 8>  mUnk7ca505;
    // NOLINTEND

public:
    // prevent constructor by default
    cgltf_buffer& operator=(cgltf_buffer const&);
    cgltf_buffer(cgltf_buffer const&);
    cgltf_buffer();
};
