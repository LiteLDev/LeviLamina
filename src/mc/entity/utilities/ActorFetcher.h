#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/StackRefResult.h"

class ActorFetcher {
public:
    // prevent constructor by default
    ActorFetcher& operator=(ActorFetcher const&);
    ActorFetcher(ActorFetcher const&);
    ActorFetcher();

public:
    // NOLINTBEGIN
    MCAPI explicit ActorFetcher(gsl::not_null<class StackRefResult<class DimensionManager>> const&);

    MCAPI class Actor* fetchActorAllDimensions(struct ActorUniqueID, bool) const;

    MCAPI class Mob* fetchMobAllDimensions(struct ActorUniqueID) const;

    MCAPI class StrictEntityContext fetchStrictActorAllDimensions(struct ActorUniqueID, bool) const;

    // NOLINTEND
};
