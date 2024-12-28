#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BeeFlagComponent {
public:
    // prevent constructor by default
    BeeFlagComponent& operator=(BeeFlagComponent const&);
    BeeFlagComponent(BeeFlagComponent const&);
    BeeFlagComponent();
};
