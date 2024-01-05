#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ManagedWanderingTraderComponent {
public:
    // prevent constructor by default
    ManagedWanderingTraderComponent& operator=(ManagedWanderingTraderComponent const&);
    ManagedWanderingTraderComponent(ManagedWanderingTraderComponent const&);
    ManagedWanderingTraderComponent();

public:
    // NOLINTBEGIN
    // symbol: ?initFromDefinition@ManagedWanderingTraderComponent@@QEAAXAEAVActor@@@Z
    MCAPI void initFromDefinition(class Actor&);

    // symbol: ?reloadComponent@ManagedWanderingTraderComponent@@QEAAXAEAVActor@@@Z
    MCAPI void reloadComponent(class Actor& actor);

    // NOLINTEND
};
