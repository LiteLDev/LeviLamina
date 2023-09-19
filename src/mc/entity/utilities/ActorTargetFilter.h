#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorTargetFilter {
public:
    // prevent constructor by default
    ActorTargetFilter& operator=(ActorTargetFilter const&);
    ActorTargetFilter(ActorTargetFilter const&);
    ActorTargetFilter();

public:
    // NOLINTBEGIN
    // symbol:
    // ?ConditionPredicates@ActorTargetFilter@@2V?$unordered_map@VHashedString@@P6A_NAEBUActorTargetFilter@@AEAVActor@@@ZU?$hash@VHashedString@@@std@@U?$equal_to@VHashedString@@@5@V?$allocator@U?$pair@$$CBVHashedString@@P6A_NAEBUActorTargetFilter@@AEAVActor@@@Z@std@@@5@@std@@A
    MCAPI static std::unordered_map<class HashedString, bool (*)(struct ActorTargetFilter const&, class Actor&)>
        ConditionPredicates;

    // NOLINTEND
};
