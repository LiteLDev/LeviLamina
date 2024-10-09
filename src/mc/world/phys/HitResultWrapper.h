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

    MCAPI void initialize(class ActorManager& actorManager, class GameplayUserManager& gameplayUserManager);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _onActorRemoved(class Actor const& actor);

    MCAPI void _onGameplayUserRemoved(class EntityContext const& entity);

    // NOLINTEND
};
