/**
 * @file  DragonBaseGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Goal.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class DragonBaseGoal.
 *
 */
class DragonBaseGoal : public Goal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DRAGONBASEGOAL
public:
    class DragonBaseGoal& operator=(class DragonBaseGoal const &) = delete;
    DragonBaseGoal(class DragonBaseGoal const &) = delete;
    DragonBaseGoal() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_DRAGONBASEGOAL
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~DragonBaseGoal();
#endif

};
