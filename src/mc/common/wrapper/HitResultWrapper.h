#pragma once

#include "mc/_HeaderOutputPredefine.h"

class HitResultWrapper {
public:
    // prevent constructor by default
    HitResultWrapper& operator=(HitResultWrapper const&);
    HitResultWrapper(HitResultWrapper const&);
    HitResultWrapper();

public:
    // NOLINTBEGIN
    // symbol: ?getHitResult@HitResultWrapper@@QEAAAEAVHitResult@@XZ
    MCAPI class HitResult& getHitResult();

    // symbol: ?initialize@HitResultWrapper@@QEAAXAEAVActorManager@@AEAVGameplayUserManager@@@Z
    MCAPI void initialize(class ActorManager&, class GameplayUserManager&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_onActorRemoved@HitResultWrapper@@AEAAXAEBVActor@@@Z
    MCAPI void _onActorRemoved(class Actor const&);

    // symbol: ?_onGameplayUserRemoved@HitResultWrapper@@AEAAXAEBVEntityContext@@@Z
    MCAPI void _onGameplayUserRemoved(class EntityContext const&);

    // NOLINTEND
};
