/**
 * @file  MC/DragonBaseGoalDefinition.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @symbol __unk_destructor_0
     */
    virtual ~DragonBaseGoalDefinition();
    /**
     * @hash   1052304409
     * @vftbl  1
     * @symbol ?validateMobType@DragonBaseGoalDefinition@@UEAA_NAEAVMob@@@Z
     */
    virtual bool validateMobType(class Mob &);
    /**
     * @hash   1144332230
     * @symbol ??0DragonBaseGoalDefinition@@QEAA@XZ
     */
    MCAPI DragonBaseGoalDefinition();
    /**
     * @hash   704545441
     * @symbol ?initialize@DragonBaseGoalDefinition@@QEAAXAEAVEntityContext@@AEAVDragonBaseGoal@@@Z
     */
    MCAPI void initialize(class EntityContext &, class DragonBaseGoal &);

};