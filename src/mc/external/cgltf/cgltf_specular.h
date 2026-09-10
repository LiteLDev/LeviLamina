#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct cgltf_specular {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnk690d35;
    ::ll::UntypedStorage<8, 48> mUnkd055af;
    ::ll::UntypedStorage<4, 12> mUnk5bedd2;
    ::ll::UntypedStorage<4, 4>  mUnk6c5b43;
    // NOLINTEND

public:
    // prevent constructor by default
    cgltf_specular& operator=(cgltf_specular const&);
    cgltf_specular(cgltf_specular const&);
    cgltf_specular();
};
