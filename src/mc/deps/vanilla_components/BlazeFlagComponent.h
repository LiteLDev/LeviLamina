#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BlazeFlagComponent {
public:
    // prevent constructor by default
    BlazeFlagComponent& operator=(BlazeFlagComponent const&);
    BlazeFlagComponent(BlazeFlagComponent const&);
    BlazeFlagComponent();
};
