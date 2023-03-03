/**
 * @file  InstantDespawnComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @symbol  ?onDespawn\@InstantDespawnComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void onDespawn(class Actor &);
    /**
     * @symbol  ?tick\@InstantDespawnComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void tick(class Actor &);

};