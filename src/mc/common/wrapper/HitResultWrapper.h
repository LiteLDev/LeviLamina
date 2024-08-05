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
    MCAPI class HitResult& getHitResult();

    MCAPI class HitResult& getLiquidHitResult();

    MCAPI void initialize(class ActorManager&, class GameplayUserManager&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _onActorRemoved(class Actor const&);

    MCAPI void _onGameplayUserRemoved(class EntityContext const&);

    // NOLINTEND
};
