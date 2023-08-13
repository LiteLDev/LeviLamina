#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/BaseGoalDefinition.h"

class MoveTowardsRestrictionDefinition : public ::BaseGoalDefinition {

public:
    // prevent constructor by default
    MoveTowardsRestrictionDefinition& operator=(MoveTowardsRestrictionDefinition const&) = delete;
    MoveTowardsRestrictionDefinition(MoveTowardsRestrictionDefinition const&)            = delete;
    MoveTowardsRestrictionDefinition()                                                   = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @symbol
     * ?initialize\@MoveTowardsRestrictionDefinition\@\@QEBAXAEAVEntityContext\@\@AEAVMoveTowardsRestrictionGoal\@\@\@Z
     */
    MCAPI void initialize(class EntityContext&, class MoveTowardsRestrictionGoal&) const;
    // NOLINTEND
};
