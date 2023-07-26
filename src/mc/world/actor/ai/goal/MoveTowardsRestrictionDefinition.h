#pragma once

#include "mc/_HeaderOutputPredefine.h"

class MoveTowardsRestrictionDefinition {

public:
    // prevent constructor by default
    MoveTowardsRestrictionDefinition& operator=(MoveTowardsRestrictionDefinition const&) = delete;
    MoveTowardsRestrictionDefinition(MoveTowardsRestrictionDefinition const&)            = delete;
    MoveTowardsRestrictionDefinition()                                                   = delete;

public:
    /**
     * @symbol
     * ?initialize\@MoveTowardsRestrictionDefinition\@\@QEBAXAEAVEntityContext\@\@AEAVMoveTowardsRestrictionGoal\@\@\@Z
     */
    MCAPI void initialize(class EntityContext&, class MoveTowardsRestrictionGoal&) const; // NOLINT
};
