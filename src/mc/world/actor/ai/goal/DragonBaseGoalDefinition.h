#pragma once

#include "mc/_HeaderOutputPredefine.h"

class DragonBaseGoalDefinition {

public:
    // prevent constructor by default
    DragonBaseGoalDefinition& operator=(DragonBaseGoalDefinition const&) = delete;
    DragonBaseGoalDefinition(DragonBaseGoalDefinition const&)            = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?validateMobType\@DragonBaseGoalDefinition\@\@UEBA_NAEAVMob\@\@\@Z
     */
    virtual bool validateMobType(class Mob&) const; // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_DRAGONBASEGOALDEFINITION
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~DragonBaseGoalDefinition(); // NOLINT
#endif
    /**
     * @symbol ??0DragonBaseGoalDefinition\@\@QEAA\@XZ
     */
    MCAPI DragonBaseGoalDefinition(); // NOLINT
    /**
     * @symbol ?initialize\@DragonBaseGoalDefinition\@\@QEBAXAEAVEntityContext\@\@AEAVDragonBaseGoal\@\@\@Z
     */
    MCAPI void initialize(class EntityContext&, class DragonBaseGoal&) const; // NOLINT
};
