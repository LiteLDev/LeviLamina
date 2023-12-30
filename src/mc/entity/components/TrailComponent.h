#pragma once

#include "mc/_HeaderOutputPredefine.h"

class TrailComponent {
public:
    // prevent constructor by default
    TrailComponent& operator=(TrailComponent const&);
    TrailComponent(TrailComponent const&);

public:
    // NOLINTBEGIN
    // symbol: ??0TrailComponent@@QEAA@XZ
    MCAPI TrailComponent();

    // symbol: ?initFromDefinition@TrailComponent@@QEAAXAEAVActor@@@Z
    MCAPI void initFromDefinition(class Actor& actor);

    // NOLINTEND
};
