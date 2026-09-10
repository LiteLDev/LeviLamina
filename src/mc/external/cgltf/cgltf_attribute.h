#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct cgltf_attribute {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk1bdb16;
    ::ll::UntypedStorage<4, 4> mUnke809b8;
    ::ll::UntypedStorage<4, 4> mUnkfc1c90;
    ::ll::UntypedStorage<8, 8> mUnk3efb18;
    // NOLINTEND

public:
    // prevent constructor by default
    cgltf_attribute& operator=(cgltf_attribute const&);
    cgltf_attribute(cgltf_attribute const&);
    cgltf_attribute();
};
