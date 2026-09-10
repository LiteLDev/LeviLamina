#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct cgltf_material_mapping {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk9b09fa;
    ::ll::UntypedStorage<8, 8>  mUnke3f11c;
    ::ll::UntypedStorage<8, 24> mUnkf4ee10;
    // NOLINTEND

public:
    // prevent constructor by default
    cgltf_material_mapping& operator=(cgltf_material_mapping const&);
    cgltf_material_mapping(cgltf_material_mapping const&);
    cgltf_material_mapping();
};
