/**
 * @file  MC/ManagedWanderingTraderComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ManagedWanderingTraderComponent.
 *
 */
class ManagedWanderingTraderComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MANAGEDWANDERINGTRADERCOMPONENT
public:
    class ManagedWanderingTraderComponent& operator=(class ManagedWanderingTraderComponent const &) = delete;
    ManagedWanderingTraderComponent(class ManagedWanderingTraderComponent const &) = delete;
    ManagedWanderingTraderComponent() = delete;
#endif

public:
    /**
     * @hash   -343473566
     * @symbol ?initFromDefinition@ManagedWanderingTraderComponent@@QEAAXAEAVActor@@@Z
     */
    MCAPI void initFromDefinition(class Actor &);
    /**
     * @hash   -1639916638
     * @symbol ?reloadComponent@ManagedWanderingTraderComponent@@QEAAXAEAVActor@@@Z
     */
    MCAPI void reloadComponent(class Actor &);

};