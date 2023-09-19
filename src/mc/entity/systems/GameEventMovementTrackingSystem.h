#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/systems/ITickingSystem.h"

class GameEventMovementTrackingSystem : public ::ITickingSystem {
public:
    // prevent constructor by default
    GameEventMovementTrackingSystem& operator=(GameEventMovementTrackingSystem const&);
    GameEventMovementTrackingSystem(GameEventMovementTrackingSystem const&);
    GameEventMovementTrackingSystem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: __unk_vfn_1
    virtual void __unk_vfn_1();

    // vIndex: 2, symbol: ?tick@GameEventMovementTrackingSystem@@UEAAXAEAVEntityRegistry@@@Z
    virtual void tick(class EntityRegistry&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_tickGameEventMovementTrackingComponent@GameEventMovementTrackingSystem@@CAXAEAVActorOwnerComponent@@AEAVGameEventMovementTrackingComponent@@@Z
    MCAPI static void
    _tickGameEventMovementTrackingComponent(class ActorOwnerComponent&, class GameEventMovementTrackingComponent&);

    // symbol: ?_trackMovement@GameEventMovementTrackingSystem@@CAXAEAVActor@@AEAVGameEventMovementTrackingComponent@@@Z
    MCAPI static void _trackMovement(class Actor&, class GameEventMovementTrackingComponent&);

    // NOLINTEND
};
