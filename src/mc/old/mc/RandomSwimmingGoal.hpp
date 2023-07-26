/**
 * @file  RandomSwimmingGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
#include "RandomStrollGoal.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class RandomSwimmingGoal.
 *
 */
class RandomSwimmingGoal : public RandomStrollGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RANDOMSWIMMINGGOAL
public:
    class RandomSwimmingGoal& operator=(class RandomSwimmingGoal const &) = delete;
    RandomSwimmingGoal(class RandomSwimmingGoal const &) = delete;
    RandomSwimmingGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~RandomSwimmingGoal();
    /**
     * @vftbl  1
     * @symbol  ?canUse\@RandomSwimmingGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl  2
     * @symbol  ?canContinueToUse\@RandomSwimmingGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  7
     * @symbol  ?appendDebugInfo\@RandomSwimmingGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @vftbl  8
     * @symbol  __unk_vfn_8
     */
    virtual void __unk_vfn_8();
    /**
     * @vftbl  9
     * @symbol  __unk_vfn_9
     */
    virtual void __unk_vfn_9();
    /**
     * @vftbl  10
     * @symbol  ?_setWantedPosition\@RandomSwimmingGoal\@\@MEAA_NXZ
     */
    virtual bool _setWantedPosition();
    /**
     * @symbol  ??0RandomSwimmingGoal\@\@QEAA\@AEAVMob\@\@MHHH_N\@Z
     */
    MCAPI RandomSwimmingGoal(class Mob &, float, int, int, int, bool);

//protected:
    /**
     * @symbol  ?_getWaterHeights\@RandomSwimmingGoal\@\@IEAAXVBlockPos\@\@AEAFAEAM22\@Z
     */
    MCAPI void _getWaterHeights(class BlockPos, short &, float &, float &, float &);

protected:

};