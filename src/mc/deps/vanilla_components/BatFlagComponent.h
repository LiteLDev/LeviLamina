#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BatFlagComponent {
public:
    // prevent constructor by default
    BatFlagComponent& operator=(BatFlagComponent const&);
    BatFlagComponent(BatFlagComponent const&);
    BatFlagComponent();
};
