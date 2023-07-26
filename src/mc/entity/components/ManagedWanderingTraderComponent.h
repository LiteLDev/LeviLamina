#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ManagedWanderingTraderComponent {

public:
    // prevent constructor by default
    ManagedWanderingTraderComponent& operator=(ManagedWanderingTraderComponent const&) = delete;
    ManagedWanderingTraderComponent(ManagedWanderingTraderComponent const&)            = delete;
    ManagedWanderingTraderComponent()                                                  = delete;

public:
    /**
     * @symbol ?initFromDefinition\@ManagedWanderingTraderComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void initFromDefinition(class Actor&); // NOLINT
    /**
     * @symbol ?reloadComponent\@ManagedWanderingTraderComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void reloadComponent(class Actor&); // NOLINT
};
