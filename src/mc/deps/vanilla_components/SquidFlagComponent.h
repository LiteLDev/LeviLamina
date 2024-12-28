#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SquidFlagComponent {
public:
    // prevent constructor by default
    SquidFlagComponent& operator=(SquidFlagComponent const&);
    SquidFlagComponent(SquidFlagComponent const&);
    SquidFlagComponent();
};
