#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct cgltf_memory_options {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkb33aed;
    ::ll::UntypedStorage<8, 8> mUnk58ef9d;
    ::ll::UntypedStorage<8, 8> mUnk2ab2fc;
    // NOLINTEND

public:
    // prevent constructor by default
    cgltf_memory_options& operator=(cgltf_memory_options const&);
    cgltf_memory_options(cgltf_memory_options const&);
    cgltf_memory_options();
};
