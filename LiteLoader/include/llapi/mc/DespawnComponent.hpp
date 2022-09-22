/**
 * @file  DespawnComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class DespawnComponent.
 *
 */
class DespawnComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DESPAWNCOMPONENT
public:
    class DespawnComponent& operator=(class DespawnComponent const &) = delete;
    DespawnComponent(class DespawnComponent const &) = delete;
    DespawnComponent() = delete;
#endif

public:
    /**
     * @hash   -844173876
     * @symbol ?onDespawn@DespawnComponent@@QEAAXAEAVActor@@@Z
     */
    MCAPI void onDespawn(class Actor &);
    /**
     * @hash   949356922
     * @symbol ?tick@DespawnComponent@@QEAAXAEAVActor@@@Z
     */
    MCAPI void tick(class Actor &);

//private:
    /**
     * @hash   -1481641715
     * @symbol ?_tryStandardDespawnRules@DespawnComponent@@AEBA_NAEAVActor@@@Z
     */
    MCAPI bool _tryStandardDespawnRules(class Actor &) const;

private:

};