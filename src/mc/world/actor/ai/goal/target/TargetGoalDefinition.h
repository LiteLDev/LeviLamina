#pragma once

#include "mc/_HeaderOutputPredefine.h"

class TargetGoalDefinition {

public:
    // prevent constructor by default
    TargetGoalDefinition& operator=(TargetGoalDefinition const&) = delete;
    TargetGoalDefinition(TargetGoalDefinition const&)            = delete;
    TargetGoalDefinition()                                       = delete;

public:
    // NOLINTBEGIN
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_TARGETGOALDEFINITION
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~TargetGoalDefinition();
#endif
    /**
     * @symbol ?initialize\@TargetGoalDefinition\@\@QEBAXAEAVEntityContext\@\@AEAVTargetGoal\@\@\@Z
     */
    MCAPI void initialize(class EntityContext&, class TargetGoal&) const;
    // NOLINTEND
};
