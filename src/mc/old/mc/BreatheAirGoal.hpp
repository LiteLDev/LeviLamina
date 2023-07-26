/**
 * @file  BreatheAirGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BreatheAirGoal.
 *
 */
class BreatheAirGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BREATHEAIRGOAL
public:
    class BreatheAirGoal& operator=(class BreatheAirGoal const &) = delete;
    BreatheAirGoal(class BreatheAirGoal const &) = delete;
    BreatheAirGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~BreatheAirGoal();
    /**
     * @vftbl  1
     * @symbol  ?canUse\@BreatheAirGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl  2
     * @symbol  ?canContinueToUse\@BreatheAirGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @symbol  ?canBeInterrupted\@BreatheAirGoal\@\@UEAA_NXZ
     */
    virtual bool canBeInterrupted();
    /**
     * @vftbl  4
     * @symbol  ?start\@BreatheAirGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @vftbl  5
     * @symbol  __unk_vfn_5
     */
    virtual void __unk_vfn_5();
    /**
     * @vftbl  6
     * @symbol  ?tick\@BreatheAirGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @vftbl  7
     * @symbol  ?appendDebugInfo\@BreatheAirGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @symbol  ??0BreatheAirGoal\@\@QEAA\@AEAVMob\@\@\@Z
     */
    MCAPI BreatheAirGoal(class Mob &);

//private:
    /**
     * @symbol  ?_determineApproximateDepth\@BreatheAirGoal\@\@AEAAHXZ
     */
    MCAPI int _determineApproximateDepth();
    /**
     * @symbol  ?_findAirPosition\@BreatheAirGoal\@\@AEAAXXZ
     */
    MCAPI void _findAirPosition();

private:

};