#pragma once

#include "mc/_HeaderOutputPredefine.h"

class GameEventMovementTrackingSystem {

public:
    // prevent constructor by default
    GameEventMovementTrackingSystem& operator=(GameEventMovementTrackingSystem const&) = delete;
    GameEventMovementTrackingSystem(GameEventMovementTrackingSystem const&)            = delete;
    GameEventMovementTrackingSystem()                                                  = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1(); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?tick\@GameEventMovementTrackingSystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry&); // NOLINT

    // private:
    /**
     * @symbol
     * ?_tickGameEventMovementTrackingComponent\@GameEventMovementTrackingSystem\@\@CAXAEAVActorOwnerComponent\@\@AEAVGameEventMovementTrackingComponent\@\@\@Z
     */
    MCAPI static void
    _tickGameEventMovementTrackingComponent(class ActorOwnerComponent&, class GameEventMovementTrackingComponent&); // NOLINT
    /**
     * @symbol
     * ?_trackMovement\@GameEventMovementTrackingSystem\@\@CAXAEAVActor\@\@AEAVGameEventMovementTrackingComponent\@\@\@Z
     */
    MCAPI static void _trackMovement(class Actor&, class GameEventMovementTrackingComponent&); // NOLINT

private:
};
