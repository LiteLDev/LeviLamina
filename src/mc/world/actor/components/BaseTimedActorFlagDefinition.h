#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BaseTimedActorFlagDefinition {

public:
    // prevent constructor by default
    BaseTimedActorFlagDefinition& operator=(BaseTimedActorFlagDefinition const&) = delete;
    BaseTimedActorFlagDefinition(BaseTimedActorFlagDefinition const&)            = delete;

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BASETIMEDACTORFLAGDEFINITION
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~BaseTimedActorFlagDefinition(); // NOLINT
#endif
    /**
     * @symbol ??0BaseTimedActorFlagDefinition\@\@QEAA\@XZ
     */
    MCAPI BaseTimedActorFlagDefinition(); // NOLINT
    /**
     * @symbol ?initialize\@BaseTimedActorFlagDefinition\@\@QEBAXAEAVEntityContext\@\@AEAVBaseTimedActorFlagGoal\@\@\@Z
     */
    MCAPI void initialize(class EntityContext&, class BaseTimedActorFlagGoal&) const; // NOLINT
};
