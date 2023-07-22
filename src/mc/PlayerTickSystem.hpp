/**
 * @file  PlayerTickSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class PlayerTickSystem.
 *
 */
class PlayerTickSystem {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYERTICKSYSTEM
public:
    class PlayerTickSystem& operator=(class PlayerTickSystem const &) = delete;
    PlayerTickSystem(class PlayerTickSystem const &) = delete;
    PlayerTickSystem() = delete;
#endif

public:
    /**
     * @symbol  ?create\@PlayerTickSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo create();
    /**
     * @symbol  ?onTickAdded\@PlayerTickSystem\@\@SAXAEAUPlayerTickComponent\@\@_K\@Z
     */
    MCAPI static void onTickAdded(struct PlayerTickComponent &, unsigned __int64);
    /**
     * @symbol  ?shouldTickMovementSystemOnEntity\@PlayerTickSystem\@\@SA_NAEBVEntityContext\@\@\@Z
     */
    MCAPI static bool shouldTickMovementSystemOnEntity(class EntityContext const &);

};