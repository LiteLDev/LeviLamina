/**
 * @file  MC/MoveTowardsRestrictionDefinition.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class MoveTowardsRestrictionDefinition.
 *
 */
class MoveTowardsRestrictionDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOVETOWARDSRESTRICTIONDEFINITION
public:
    class MoveTowardsRestrictionDefinition& operator=(class MoveTowardsRestrictionDefinition const &) = delete;
    MoveTowardsRestrictionDefinition(class MoveTowardsRestrictionDefinition const &) = delete;
#endif

public:
    /**
     * @hash   933730192
     * @symbol ??0MoveTowardsRestrictionDefinition@@QEAA@XZ
     */
    MCAPI MoveTowardsRestrictionDefinition();
    /**
     * @hash   1908077651
     * @symbol ?initialize@MoveTowardsRestrictionDefinition@@QEAAXAEAVEntityContext@@AEAVMoveTowardsRestrictionGoal@@@Z
     */
    MCAPI void initialize(class EntityContext &, class MoveTowardsRestrictionGoal &);

};