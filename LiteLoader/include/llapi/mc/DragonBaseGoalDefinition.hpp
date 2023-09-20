/**
 * @file  DragonBaseGoalDefinition.hpp
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
 * @brief MC class DragonBaseGoalDefinition.
 *
 */
class DragonBaseGoalDefinition : public BaseGoalDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DRAGONBASEGOALDEFINITION
public:
    class DragonBaseGoalDefinition& operator=(class DragonBaseGoalDefinition const &) = delete;
    DragonBaseGoalDefinition(class DragonBaseGoalDefinition const &) = delete;
    DragonBaseGoalDefinition() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?validateMobType\@DragonBaseGoalDefinition\@\@UEBA_NAEAVMob\@\@\@Z
     */
    virtual bool validateMobType(class Mob &) const;

};
