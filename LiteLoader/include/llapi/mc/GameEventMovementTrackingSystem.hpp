/**
 * @file  GameEventMovementTrackingSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class GameEventMovementTrackingSystem.
 *
 */
class GameEventMovementTrackingSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GAMEEVENTMOVEMENTTRACKINGSYSTEM
public:
    class GameEventMovementTrackingSystem& operator=(class GameEventMovementTrackingSystem const &) = delete;
    GameEventMovementTrackingSystem(class GameEventMovementTrackingSystem const &) = delete;
    GameEventMovementTrackingSystem() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~GameEventMovementTrackingSystem();
    /**
     * @vftbl  1
     * @symbol  __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl  2
     * @symbol  ?tick\@GameEventMovementTrackingSystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry &);

//private:
    /**
     * @symbol  ?_tickGameEventMovementTrackingComponent\@GameEventMovementTrackingSystem\@\@CAXAEAVActorOwnerComponent\@\@AEAVGameEventMovementTrackingComponent\@\@\@Z
     */
    MCAPI static void _tickGameEventMovementTrackingComponent(class ActorOwnerComponent &, class GameEventMovementTrackingComponent &);
    /**
     * @symbol  ?_trackMovement\@GameEventMovementTrackingSystem\@\@CAXAEAVActor\@\@AEAVGameEventMovementTrackingComponent\@\@\@Z
     */
    MCAPI static void _trackMovement(class Actor &, class GameEventMovementTrackingComponent &);

private:

};