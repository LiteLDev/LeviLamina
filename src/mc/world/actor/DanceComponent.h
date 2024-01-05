#pragma once

#include "mc/_HeaderOutputPredefine.h"

class DanceComponent {
public:
    // prevent constructor by default
    DanceComponent& operator=(DanceComponent const&);
    DanceComponent(DanceComponent const&);

public:
    // NOLINTBEGIN
    // symbol: ??0DanceComponent@@QEAA@XZ
    MCAPI DanceComponent();

    // symbol: ?inListenDistance@DanceComponent@@QEBA_NAEBVVec3@@@Z
    MCAPI bool inListenDistance(class Vec3 const& pos) const;

    // symbol: ?initFromDefinition@DanceComponent@@QEAAXAEAVActor@@@Z
    MCAPI void initFromDefinition(class Actor& actor);

    // symbol: ?initFromDefinition@DanceComponent@@QEAAXAEAVActor@@M@Z
    MCAPI void initFromDefinition(class Actor& actor, float distance);

    // NOLINTEND
};
