#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct cgltf_volume {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnke82232;
    ::ll::UntypedStorage<4, 4>  mUnk3a398b;
    ::ll::UntypedStorage<4, 12> mUnk921230;
    ::ll::UntypedStorage<4, 4>  mUnk53576b;
    // NOLINTEND

public:
    // prevent constructor by default
    cgltf_volume& operator=(cgltf_volume const&);
    cgltf_volume(cgltf_volume const&);
    cgltf_volume();
};
