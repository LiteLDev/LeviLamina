#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct IgnoresEntityInsideFlagComponent {
public:
    // prevent constructor by default
    IgnoresEntityInsideFlagComponent& operator=(IgnoresEntityInsideFlagComponent const&);
    IgnoresEntityInsideFlagComponent(IgnoresEntityInsideFlagComponent const&);
    IgnoresEntityInsideFlagComponent();
};
