/**
 * @file  SleepGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "../../MoveToPOIGoal.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class SleepGoal.
 *
 */
class SleepGoal : public MoveToPOIGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SLEEPGOAL
public:
    class SleepGoal& operator=(class SleepGoal const &) = delete;
    SleepGoal(class SleepGoal const &) = delete;
    SleepGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~SleepGoal();
    /**
     * @hash   1988437174
     * @vftbl  1
     * @symbol  ?canUse\@SleepGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @hash   1760279540
     * @vftbl  2
     * @symbol  ?canContinueToUse\@SleepGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @symbol  __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @hash   -143738977
     * @vftbl  4
     * @symbol  ?start\@SleepGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @hash   -2093915233
     * @vftbl  5
     * @symbol  ?stop\@SleepGoal\@\@UEAAXXZ
     */
    virtual void stop();
    /**
     * @hash   875226282
     * @vftbl  6
     * @symbol  ?tick\@SleepGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @hash   -1838341238
     * @vftbl  7
     * @symbol  ?appendDebugInfo\@SleepGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
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
     * @hash   908619572
     * @vftbl  16
     * @symbol  ?_getRepathTime\@SleepGoal\@\@EEBA_KXZ
     */
    virtual unsigned __int64 _getRepathTime() const;
    /**
     * @hash   1873270044
     * @symbol  ??0SleepGoal\@\@QEAA\@AEAVMob\@\@MMM_NMHM\@Z
     */
    MCAPI SleepGoal(class Mob &, float, float, float, bool, float, int, float);

//private:
    /**
     * @hash   1149551562
     * @symbol  ?_lockPosToBedPos\@SleepGoal\@\@AEAAXXZ
     */
    MCAPI void _lockPosToBedPos();
    /**
     * @hash   1159437312
     * @symbol  ?_wakeUp\@SleepGoal\@\@AEAAXXZ
     */
    MCAPI void _wakeUp();

private:

};