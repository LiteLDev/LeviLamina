#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct cgltf_extras {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk99cb84;
    ::ll::UntypedStorage<8, 8> mUnk53c9d3;
    ::ll::UntypedStorage<8, 8> mUnkbe24ae;
    // NOLINTEND

public:
    // prevent constructor by default
    cgltf_extras& operator=(cgltf_extras const&);
    cgltf_extras(cgltf_extras const&);
    cgltf_extras();
};
