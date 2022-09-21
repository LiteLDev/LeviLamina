/**
 * @file  MC/CombatRegenerationComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class CombatRegenerationComponent.
 *
 */
class CombatRegenerationComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMBATREGENERATIONCOMPONENT
public:
    class CombatRegenerationComponent& operator=(class CombatRegenerationComponent const &) = delete;
    CombatRegenerationComponent(class CombatRegenerationComponent const &) = delete;
    CombatRegenerationComponent() = delete;
#endif

public:
    /**
     * @hash   -758203246
     * @symbol ?tick@CombatRegenerationComponent@@QEAAXAEAVActor@@@Z
     */
    MCAPI void tick(class Actor &);

//private:
    /**
     * @hash   920222326
     * @symbol ?_applyCombatBuffsToMob@CombatRegenerationComponent@@AEAAXAEAVActor@@0@Z
     */
    MCAPI void _applyCombatBuffsToMob(class Actor &, class Actor &);

private:

};