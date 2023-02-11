/**
 * @file  RandomBreachingGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "RandomStrollGoal.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class RandomBreachingGoal.
 *
 */
class RandomBreachingGoal : public RandomStrollGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RANDOMBREACHINGGOAL
public:
    class RandomBreachingGoal& operator=(class RandomBreachingGoal const &) = delete;
    RandomBreachingGoal(class RandomBreachingGoal const &) = delete;
    RandomBreachingGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~RandomBreachingGoal();
    /**
     * @hash   1935823343
     * @vftbl  1
     * @symbol  ?canUse\@RandomBreachingGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @hash   -1523346243
     * @vftbl  2
     * @symbol  ?canContinueToUse\@RandomBreachingGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @hash   -1816400553
     * @vftbl  3
     * @symbol  ?canBeInterrupted\@RandomBreachingGoal\@\@UEAA_NXZ
     */
    virtual bool canBeInterrupted();
    /**
     * @hash   -1257019432
     * @vftbl  4
     * @symbol  ?start\@RandomBreachingGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @hash   -355286056
     * @vftbl  5
     * @symbol  ?stop\@RandomBreachingGoal\@\@UEAAXXZ
     */
    virtual void stop();
    /**
     * @hash   -1764154063
     * @vftbl  7
     * @symbol  ?appendDebugInfo\@RandomBreachingGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
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
     * @hash   1269997372
     * @vftbl  10
     * @symbol  ?_setWantedPosition\@RandomBreachingGoal\@\@MEAA_NXZ
     */
    virtual bool _setWantedPosition();
    /**
     * @hash   309589651
     * @symbol  ??0RandomBreachingGoal\@\@QEAA\@AEAVMob\@\@MHHHM\@Z
     */
    MCAPI RandomBreachingGoal(class Mob &, float, int, int, int, float);

};