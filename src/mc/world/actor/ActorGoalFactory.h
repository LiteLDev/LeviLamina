#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ActorGoalFactory {

public:
    // prevent constructor by default
    ActorGoalFactory& operator=(ActorGoalFactory const&) = delete;
    ActorGoalFactory(ActorGoalFactory const&)            = delete;
    ActorGoalFactory()                                   = delete;

public:
    /**
     * @symbol ?_initializeBedrock\@ActorGoalFactory\@\@QEAAXXZ
     */
    MCAPI void _initializeBedrock(); // NOLINT
};
