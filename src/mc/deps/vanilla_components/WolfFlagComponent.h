#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct WolfFlagComponent {
public:
    // prevent constructor by default
    WolfFlagComponent& operator=(WolfFlagComponent const&);
    WolfFlagComponent(WolfFlagComponent const&);
    WolfFlagComponent();
};
