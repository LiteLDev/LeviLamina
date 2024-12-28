#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct DolphinFlagComponent {
public:
    // prevent constructor by default
    DolphinFlagComponent& operator=(DolphinFlagComponent const&);
    DolphinFlagComponent(DolphinFlagComponent const&);
    DolphinFlagComponent();
};
