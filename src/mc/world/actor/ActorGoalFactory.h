#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ActorGoalFactory {
public:
    // prevent constructor by default
    ActorGoalFactory& operator=(ActorGoalFactory const&);
    ActorGoalFactory(ActorGoalFactory const&);
    ActorGoalFactory();

public:
    // NOLINTBEGIN
    // symbol: ?_initializeBedrock@ActorGoalFactory@@QEAAXXZ
    MCAPI void _initializeBedrock();

    // NOLINTEND
};
