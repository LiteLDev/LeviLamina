#pragma once

#include "mc/_HeaderOutputPredefine.h"

class DragonBaseGoalDefinition {

public:
    // prevent constructor by default
    DragonBaseGoalDefinition& operator=(DragonBaseGoalDefinition const&) = delete;
    DragonBaseGoalDefinition(DragonBaseGoalDefinition const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?validateMobType\@DragonBaseGoalDefinition\@\@UEBA_NAEAVMob\@\@\@Z
     */
    virtual bool validateMobType(class Mob&) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_DRAGONBASEGOALDEFINITION
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~DragonBaseGoalDefinition();
#endif
    /**
     * @symbol ??0DragonBaseGoalDefinition\@\@QEAA\@XZ
     */
    MCAPI DragonBaseGoalDefinition();
    /**
     * @symbol ?initialize\@DragonBaseGoalDefinition\@\@QEBAXAEAVEntityContext\@\@AEAVDragonBaseGoal\@\@\@Z
     */
    MCAPI void initialize(class EntityContext&, class DragonBaseGoal&) const;
    // NOLINTEND
};
