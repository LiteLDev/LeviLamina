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
    MCAPI static std::unordered_map<class HashedString, bool (*)(struct ActorTargetFilter const&, class Actor&)>
        ConditionPredicates;

    // NOLINTEND
};
