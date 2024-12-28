#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct VexFlagComponent {
public:
    // prevent constructor by default
    VexFlagComponent& operator=(VexFlagComponent const&);
    VexFlagComponent(VexFlagComponent const&);
    VexFlagComponent();
};
