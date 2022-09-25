/**
 * @file  TargetGoalDefinition.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class TargetGoalDefinition.
 *
 */
class TargetGoalDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TARGETGOALDEFINITION
public:
    class TargetGoalDefinition& operator=(class TargetGoalDefinition const &) = delete;
    TargetGoalDefinition(class TargetGoalDefinition const &) = delete;
    TargetGoalDefinition() = delete;
#endif

public:
    /**
     * @hash   1261969309
     * @symbol ?initialize@TargetGoalDefinition@@QEAAXAEAVEntityContext@@AEAVTargetGoal@@@Z
     */
    MCAPI void initialize(class EntityContext &, class TargetGoal &);

};