#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct cgltf_clearcoat {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnk84a1a4;
    ::ll::UntypedStorage<8, 48> mUnkf9b5f4;
    ::ll::UntypedStorage<8, 48> mUnk10018e;
    ::ll::UntypedStorage<4, 4>  mUnk1287b6;
    ::ll::UntypedStorage<4, 4>  mUnk943099;
    // NOLINTEND

public:
    // prevent constructor by default
    cgltf_clearcoat& operator=(cgltf_clearcoat const&);
    cgltf_clearcoat(cgltf_clearcoat const&);
    cgltf_clearcoat();
};
