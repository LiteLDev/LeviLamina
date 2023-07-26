#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct IgnoresEntityInsideFlagComponent {

public:
    // prevent constructor by default
    IgnoresEntityInsideFlagComponent& operator=(IgnoresEntityInsideFlagComponent const&) = delete;
    IgnoresEntityInsideFlagComponent(IgnoresEntityInsideFlagComponent const&)            = delete;
    IgnoresEntityInsideFlagComponent()                                                   = delete;
};
