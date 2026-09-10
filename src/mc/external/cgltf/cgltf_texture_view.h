#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct cgltf_texture_view {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk140c46;
    ::ll::UntypedStorage<4, 4>  mUnkf64b43;
    ::ll::UntypedStorage<4, 4>  mUnka76b80;
    ::ll::UntypedStorage<4, 4>  mUnk7e1ff7;
    ::ll::UntypedStorage<4, 28> mUnk4814b9;
    // NOLINTEND

public:
    // prevent constructor by default
    cgltf_texture_view& operator=(cgltf_texture_view const&);
    cgltf_texture_view(cgltf_texture_view const&);
    cgltf_texture_view();
};
