#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct WitchFlagComponent {
public:
    // prevent constructor by default
    WitchFlagComponent& operator=(WitchFlagComponent const&);
    WitchFlagComponent(WitchFlagComponent const&);
    WitchFlagComponent();
};
