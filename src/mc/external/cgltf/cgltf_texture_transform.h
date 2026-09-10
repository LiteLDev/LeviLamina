#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct cgltf_texture_transform {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 8> mUnkc42c62;
    ::ll::UntypedStorage<4, 4> mUnk91c4ee;
    ::ll::UntypedStorage<4, 8> mUnk8c4504;
    ::ll::UntypedStorage<4, 4> mUnke06779;
    ::ll::UntypedStorage<4, 4> mUnka65bf3;
    // NOLINTEND

public:
    // prevent constructor by default
    cgltf_texture_transform& operator=(cgltf_texture_transform const&);
    cgltf_texture_transform(cgltf_texture_transform const&);
    cgltf_texture_transform();
};
