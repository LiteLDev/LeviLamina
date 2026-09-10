#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct cgltf_scene {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnkd2b3e8;
    ::ll::UntypedStorage<8, 8>  mUnkd354ba;
    ::ll::UntypedStorage<8, 8>  mUnk75e4f5;
    ::ll::UntypedStorage<8, 24> mUnkdc71a7;
    ::ll::UntypedStorage<8, 8>  mUnkca1248;
    ::ll::UntypedStorage<8, 8>  mUnkb42d49;
    // NOLINTEND

public:
    // prevent constructor by default
    cgltf_scene& operator=(cgltf_scene const&);
    cgltf_scene(cgltf_scene const&);
    cgltf_scene();
};
