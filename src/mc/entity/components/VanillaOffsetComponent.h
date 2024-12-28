#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct VanillaOffsetComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnkc5dc89;
    ::ll::UntypedStorage<4, 12> mUnk3d3381;
    // NOLINTEND

public:
    // prevent constructor by default
    VanillaOffsetComponent& operator=(VanillaOffsetComponent const&);
    VanillaOffsetComponent(VanillaOffsetComponent const&);
    VanillaOffsetComponent();
};
