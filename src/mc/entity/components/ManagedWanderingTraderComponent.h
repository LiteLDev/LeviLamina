#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ManagedWanderingTraderComponent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MANAGEDWANDERINGTRADERCOMPONENT
public:
    ManagedWanderingTraderComponent& operator=(ManagedWanderingTraderComponent const&) = delete;
    ManagedWanderingTraderComponent(ManagedWanderingTraderComponent const&)            = delete;
    ManagedWanderingTraderComponent()                                                  = delete;
#endif

public:
    /**
     * @symbol ?initFromDefinition\@ManagedWanderingTraderComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void initFromDefinition(class Actor&);
    /**
     * @symbol ?reloadComponent\@ManagedWanderingTraderComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void reloadComponent(class Actor&);
};
