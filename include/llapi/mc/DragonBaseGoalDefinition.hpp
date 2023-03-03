/**
 * @file  DragonBaseGoalDefinition.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class DragonBaseGoalDefinition.
 *
 */
class DragonBaseGoalDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DRAGONBASEGOALDEFINITION
public:
    class DragonBaseGoalDefinition& operator=(class DragonBaseGoalDefinition const &) = delete;
    DragonBaseGoalDefinition(class DragonBaseGoalDefinition const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~DragonBaseGoalDefinition();
    /**
     * @vftbl  1
     * @symbol  ?validateMobType\@DragonBaseGoalDefinition\@\@UEBA_NAEAVMob\@\@\@Z
     */
    virtual bool validateMobType(class Mob &) const;
    /**
     * @symbol  ??0DragonBaseGoalDefinition\@\@QEAA\@XZ
     */
    MCAPI DragonBaseGoalDefinition();
    /**
     * @symbol  ?initialize\@DragonBaseGoalDefinition\@\@QEBAXAEAVEntityContext\@\@AEAVDragonBaseGoal\@\@\@Z
     */
    MCAPI void initialize(class EntityContext &, class DragonBaseGoal &) const;

};