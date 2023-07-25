#pragma once

#include "mc/_HeaderOutputPredefine.h"

class MoveTowardsRestrictionDefinition {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOVETOWARDSRESTRICTIONDEFINITION
public:
    MoveTowardsRestrictionDefinition& operator=(MoveTowardsRestrictionDefinition const&) = delete;
    MoveTowardsRestrictionDefinition(MoveTowardsRestrictionDefinition const&)            = delete;
    MoveTowardsRestrictionDefinition()                                                   = delete;
#endif

public:
    /**
     * @symbol
     * ?initialize\@MoveTowardsRestrictionDefinition\@\@QEBAXAEAVEntityContext\@\@AEAVMoveTowardsRestrictionGoal\@\@\@Z
     */
    MCAPI void initialize(class EntityContext&, class MoveTowardsRestrictionGoal&) const;
};
