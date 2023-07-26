#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct AbilitiesComponent {

public:
    // prevent constructor by default
    AbilitiesComponent& operator=(AbilitiesComponent const&) = delete;
    AbilitiesComponent(AbilitiesComponent const&)            = delete;
    AbilitiesComponent()                                     = delete;
};
