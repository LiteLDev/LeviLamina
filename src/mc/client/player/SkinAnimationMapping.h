#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SkinAnimationMapping {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk4d925b;
    ::ll::UntypedStorage<8, 32> mUnkcaf410;
    // NOLINTEND

public:
    // prevent constructor by default
    SkinAnimationMapping& operator=(SkinAnimationMapping const&);
    SkinAnimationMapping(SkinAnimationMapping const&);
    SkinAnimationMapping();
};
