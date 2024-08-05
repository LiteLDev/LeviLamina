#pragma once

#include "mc/_HeaderOutputPredefine.h"

class TrailComponent {
public:
    // prevent constructor by default
    TrailComponent& operator=(TrailComponent const&);
    TrailComponent(TrailComponent const&);

public:
    // NOLINTBEGIN
    MCAPI TrailComponent();

    MCAPI void initFromDefinition(class Actor& actor);

    // NOLINTEND
};
