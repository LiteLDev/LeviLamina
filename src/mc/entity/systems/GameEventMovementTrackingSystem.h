#pragma once

#include "mc/_HeaderOutputPredefine.h"

class GameEventMovementTrackingSystem {

public:
    // prevent constructor by default
    GameEventMovementTrackingSystem& operator=(GameEventMovementTrackingSystem const&) = delete;
    GameEventMovementTrackingSystem(GameEventMovementTrackingSystem const&)            = delete;
    GameEventMovementTrackingSystem()                                                  = delete;

public:
    // NOLINTBEGIN
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
    virtual void tick(class EntityRegistry&);
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?_tickGameEventMovementTrackingComponent\@GameEventMovementTrackingSystem\@\@CAXAEAVActorOwnerComponent\@\@AEAVGameEventMovementTrackingComponent\@\@\@Z
     */
    MCAPI static void
    _tickGameEventMovementTrackingComponent(class ActorOwnerComponent&, class GameEventMovementTrackingComponent&);
    /**
     * @symbol
     * ?_trackMovement\@GameEventMovementTrackingSystem\@\@CAXAEAVActor\@\@AEAVGameEventMovementTrackingComponent\@\@\@Z
     */
    MCAPI static void _trackMovement(class Actor&, class GameEventMovementTrackingComponent&);
    // NOLINTEND
};
