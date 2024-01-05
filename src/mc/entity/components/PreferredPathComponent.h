#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PreferredPathComponent {
public:
    // prevent constructor by default
    PreferredPathComponent& operator=(PreferredPathComponent const&);
    PreferredPathComponent(PreferredPathComponent const&);
    PreferredPathComponent();

public:
    // NOLINTBEGIN
    // symbol: ?initFromDefinition@PreferredPathComponent@@QEAAXAEAVActor@@@Z
    MCAPI void initFromDefinition(class Actor&);

    // symbol: ?getPreferredPath@PreferredPathComponent@@SAAEBUPreferredPathDescription@@AEBVActor@@@Z
    MCAPI static struct PreferredPathDescription const& getPreferredPath(class Actor const& actor);

    // NOLINTEND
};
