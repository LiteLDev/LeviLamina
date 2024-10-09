#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/StackRefResult.h"

class ActorFetcher {
public:
    // prevent constructor by default
    ActorFetcher& operator=(ActorFetcher const&);
    ActorFetcher(ActorFetcher const&);
    ActorFetcher();

public:
    // NOLINTBEGIN
    MCAPI explicit ActorFetcher(gsl::not_null<class StackRefResult<class DimensionManager>> const& dimensionManager);

    MCAPI class Actor* fetchActorAllDimensions(struct ActorUniqueID actorId, bool getRemoved) const;

    MCAPI class Mob* fetchMobAllDimensions(struct ActorUniqueID mobId) const;

    MCAPI class StrictEntityContext fetchStrictActorAllDimensions(struct ActorUniqueID actorId, bool getRemoved) const;

    // NOLINTEND
};
