#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct VanillaOffsetComponent {
public:
    // prevent constructor by default
    VanillaOffsetComponent& operator=(VanillaOffsetComponent const&);
    VanillaOffsetComponent(VanillaOffsetComponent const&);
    VanillaOffsetComponent();
};
