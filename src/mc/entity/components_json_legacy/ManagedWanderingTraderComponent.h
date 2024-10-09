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
    MCAPI void initFromDefinition(class Actor&);

    MCAPI void reloadComponent(class Actor& actor);

    // NOLINTEND
};
