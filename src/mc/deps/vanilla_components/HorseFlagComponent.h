#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct HorseFlagComponent {
public:
    // prevent constructor by default
    HorseFlagComponent& operator=(HorseFlagComponent const&);
    HorseFlagComponent(HorseFlagComponent const&);
    HorseFlagComponent();
};
