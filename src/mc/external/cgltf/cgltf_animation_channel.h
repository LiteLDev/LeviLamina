#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct cgltf_animation_channel {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk895f73;
    ::ll::UntypedStorage<8, 8>  mUnk934b96;
    ::ll::UntypedStorage<4, 4>  mUnk74d897;
    ::ll::UntypedStorage<8, 24> mUnk8cebc6;
    ::ll::UntypedStorage<8, 8>  mUnk212650;
    ::ll::UntypedStorage<8, 8>  mUnk72b76f;
    // NOLINTEND

public:
    // prevent constructor by default
    cgltf_animation_channel& operator=(cgltf_animation_channel const&);
    cgltf_animation_channel(cgltf_animation_channel const&);
    cgltf_animation_channel();
};
