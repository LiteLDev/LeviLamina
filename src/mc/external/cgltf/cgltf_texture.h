#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct cgltf_texture {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk3180b2;
    ::ll::UntypedStorage<8, 8>  mUnka7624d;
    ::ll::UntypedStorage<8, 8>  mUnk86f75f;
    ::ll::UntypedStorage<4, 4>  mUnkf05848;
    ::ll::UntypedStorage<8, 8>  mUnk5d87dd;
    ::ll::UntypedStorage<4, 4>  mUnkc22b7b;
    ::ll::UntypedStorage<8, 8>  mUnke89843;
    ::ll::UntypedStorage<8, 24> mUnkcaa683;
    ::ll::UntypedStorage<8, 8>  mUnk4c78bb;
    ::ll::UntypedStorage<8, 8>  mUnk609a2e;
    // NOLINTEND

public:
    // prevent constructor by default
    cgltf_texture& operator=(cgltf_texture const&);
    cgltf_texture(cgltf_texture const&);
    cgltf_texture();
};
