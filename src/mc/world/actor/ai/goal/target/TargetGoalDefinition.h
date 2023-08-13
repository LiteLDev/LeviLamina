#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/BaseGoalDefinition.h"

class TargetGoalDefinition : public ::BaseGoalDefinition {

public:
    // prevent constructor by default
    TargetGoalDefinition& operator=(TargetGoalDefinition const&) = delete;
    TargetGoalDefinition(TargetGoalDefinition const&)            = delete;
    TargetGoalDefinition()                                       = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
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
