/**
 * @file  InstantDespawnComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class InstantDespawnComponent.
 *
 */
class InstantDespawnComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_INSTANTDESPAWNCOMPONENT
public:
    class InstantDespawnComponent& operator=(class InstantDespawnComponent const &) = delete;
    InstantDespawnComponent(class InstantDespawnComponent const &) = delete;
    InstantDespawnComponent() = delete;
#endif

public:
    /**
     * @hash   -264495084
     * @symbol ?onDespawn@InstantDespawnComponent@@QEAAXAEAVActor@@@Z
     */
    MCAPI void onDespawn(class Actor &);
    /**
     * @hash   -1021250110
     * @symbol ?tick@InstantDespawnComponent@@QEAAXAEAVActor@@@Z
     */
    MCAPI void tick(class Actor &);

};