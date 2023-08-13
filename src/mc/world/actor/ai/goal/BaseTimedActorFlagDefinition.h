#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/BaseGoalDefinition.h"

class BaseTimedActorFlagDefinition : public ::BaseGoalDefinition {

public:
    // prevent constructor by default
    BaseTimedActorFlagDefinition& operator=(BaseTimedActorFlagDefinition const&) = delete;
    BaseTimedActorFlagDefinition(BaseTimedActorFlagDefinition const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BASETIMEDACTORFLAGDEFINITION
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~BaseTimedActorFlagDefinition();
#endif
    /**
     * @symbol ??0BaseTimedActorFlagDefinition\@\@QEAA\@XZ
     */
    MCAPI BaseTimedActorFlagDefinition();
    /**
     * @symbol ?initialize\@BaseTimedActorFlagDefinition\@\@QEBAXAEAVEntityContext\@\@AEAVBaseTimedActorFlagGoal\@\@\@Z
     */
    MCAPI void initialize(class EntityContext&, class BaseTimedActorFlagGoal&) const;
    // NOLINTEND
};
