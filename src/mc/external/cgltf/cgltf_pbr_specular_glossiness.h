#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct cgltf_pbr_specular_glossiness {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnk9913c4;
    ::ll::UntypedStorage<8, 48> mUnk544d0c;
    ::ll::UntypedStorage<4, 16> mUnk13de82;
    ::ll::UntypedStorage<4, 12> mUnk2a38ec;
    ::ll::UntypedStorage<4, 4>  mUnk840965;
    // NOLINTEND

public:
    // prevent constructor by default
    cgltf_pbr_specular_glossiness& operator=(cgltf_pbr_specular_glossiness const&);
    cgltf_pbr_specular_glossiness(cgltf_pbr_specular_glossiness const&);
    cgltf_pbr_specular_glossiness();
};
