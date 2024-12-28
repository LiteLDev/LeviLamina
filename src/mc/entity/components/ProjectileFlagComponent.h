#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ProjectileFlagComponent {
public:
    // prevent constructor by default
    ProjectileFlagComponent& operator=(ProjectileFlagComponent const&);
    ProjectileFlagComponent(ProjectileFlagComponent const&);
    ProjectileFlagComponent();
};
