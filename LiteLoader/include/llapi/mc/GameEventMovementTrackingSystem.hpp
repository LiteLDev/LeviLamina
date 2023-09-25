/**
 * @file  GameEventMovementTrackingSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "ITickingSystem.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class GameEventMovementTrackingSystem.
 *
 */
class GameEventMovementTrackingSystem : public ITickingSystem {

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
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl 2
     * @symbol ?tick\@GameEventMovementTrackingSystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry &);

//private:
    /**
     * @symbol ?_tickGameEventMovementTrackingComponent\@GameEventMovementTrackingSystem\@\@CAXAEAVActorOwnerComponent\@\@AEAVGameEventMovementTrackingComponent\@\@V?$Optional\@$$CBVRailMovementComponent\@\@\@\@\@Z
     */
    MCAPI static void _tickGameEventMovementTrackingComponent(class ActorOwnerComponent &, class GameEventMovementTrackingComponent &, class Optional<class RailMovementComponent const>);
    /**
     * @symbol ?_trackMovement\@GameEventMovementTrackingSystem\@\@CAXAEAVActor\@\@AEAVGameEventMovementTrackingComponent\@\@V?$Optional\@$$CBVRailMovementComponent\@\@\@\@\@Z
     */
    MCAPI static void _trackMovement(class Actor &, class GameEventMovementTrackingComponent &, class Optional<class RailMovementComponent const>);

private:

};
