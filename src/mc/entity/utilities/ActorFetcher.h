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
    // symbol: ??0ActorFetcher@@QEAA@AEBV?$not_null@V?$StackRefResult@VDimensionManager@@@@@gsl@@@Z
    MCAPI explicit ActorFetcher(gsl::not_null<class StackRefResult<class DimensionManager>> const&);

    // symbol: ?fetchActorAllDimensions@ActorFetcher@@QEBAPEAVActor@@UActorUniqueID@@_N@Z
    MCAPI class Actor* fetchActorAllDimensions(struct ActorUniqueID, bool) const;

    // symbol: ?fetchMobAllDimensions@ActorFetcher@@QEBAPEAVMob@@UActorUniqueID@@@Z
    MCAPI class Mob* fetchMobAllDimensions(struct ActorUniqueID) const;

    // symbol: ?fetchStrictActorAllDimensions@ActorFetcher@@QEBA?AVStrictEntityContext@@UActorUniqueID@@_N@Z
    MCAPI class StrictEntityContext fetchStrictActorAllDimensions(struct ActorUniqueID, bool) const;

    // NOLINTEND
};
