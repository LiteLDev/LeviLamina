#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct cgltf_pbr_metallic_roughness {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnkf30849;
    ::ll::UntypedStorage<8, 48> mUnk381cb6;
    ::ll::UntypedStorage<4, 16> mUnkfd1cc1;
    ::ll::UntypedStorage<4, 4>  mUnk6aa3b2;
    ::ll::UntypedStorage<4, 4>  mUnk9e6349;
    // NOLINTEND

public:
    // prevent constructor by default
    cgltf_pbr_metallic_roughness& operator=(cgltf_pbr_metallic_roughness const&);
    cgltf_pbr_metallic_roughness(cgltf_pbr_metallic_roughness const&);
    cgltf_pbr_metallic_roughness();
};
