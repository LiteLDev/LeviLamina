#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct AbilitiesComponent {
public:
    // prevent constructor by default
    AbilitiesComponent& operator=(AbilitiesComponent const&);
    AbilitiesComponent(AbilitiesComponent const&);
    AbilitiesComponent();
};
