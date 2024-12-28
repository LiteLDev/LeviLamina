#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct AbilitiesDirtyComponent {
public:
    // prevent constructor by default
    AbilitiesDirtyComponent& operator=(AbilitiesDirtyComponent const&);
    AbilitiesDirtyComponent(AbilitiesDirtyComponent const&);
    AbilitiesDirtyComponent();
};
