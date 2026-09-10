#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct cgltf_material_variant {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk6d9a39;
    ::ll::UntypedStorage<8, 24> mUnke35a96;
    // NOLINTEND

public:
    // prevent constructor by default
    cgltf_material_variant& operator=(cgltf_material_variant const&);
    cgltf_material_variant(cgltf_material_variant const&);
    cgltf_material_variant();
};
