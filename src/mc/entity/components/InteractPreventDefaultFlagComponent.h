#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct InteractPreventDefaultFlagComponent {
public:
    // prevent constructor by default
    InteractPreventDefaultFlagComponent& operator=(InteractPreventDefaultFlagComponent const&);
    InteractPreventDefaultFlagComponent(InteractPreventDefaultFlagComponent const&);
    InteractPreventDefaultFlagComponent();
};
