/**
 * @file  TargetGoalDefinition.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "BaseGoalDefinition.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class TargetGoalDefinition.
 *
 */
class TargetGoalDefinition : public BaseGoalDefinition {

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
    MCAPI void initialize(class EntityContext &, class TargetGoal &) const;

};
