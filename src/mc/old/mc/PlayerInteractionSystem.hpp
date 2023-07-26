/**
 * @file  PlayerInteractionSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class PlayerInteractionSystem.
 *
 */
class PlayerInteractionSystem {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYERINTERACTIONSYSTEM
public:
    class PlayerInteractionSystem& operator=(class PlayerInteractionSystem const &) = delete;
    PlayerInteractionSystem(class PlayerInteractionSystem const &) = delete;
    PlayerInteractionSystem() = delete;
#endif

public:
    /**
     * @symbol  ?getInteraction\@PlayerInteractionSystem\@\@QEAA_NAEAVActor\@\@AEAVPlayer\@\@AEAVActorInteraction\@\@\@Z
     */
    MCAPI bool getInteraction(class Actor &, class Player &, class ActorInteraction &);

};