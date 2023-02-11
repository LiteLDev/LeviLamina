/**
 * @file  DrinkMilkGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class DrinkMilkGoal.
 *
 */
class DrinkMilkGoal {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DRINKMILKGOAL
public:
    class DrinkMilkGoal& operator=(class DrinkMilkGoal const &) = delete;
    DrinkMilkGoal(class DrinkMilkGoal const &) = delete;
    DrinkMilkGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~DrinkMilkGoal();
    /**
     * @hash   -1930877958
     * @vftbl  1
     * @symbol  ?canUse\@DrinkMilkGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @hash   -1063913528
     * @vftbl  2
     * @symbol  ?canContinueToUse\@DrinkMilkGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @symbol  __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @hash   1447990755
     * @vftbl  4
     * @symbol  ?start\@DrinkMilkGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @hash   1052435171
     * @vftbl  5
     * @symbol  ?stop\@DrinkMilkGoal\@\@UEAAXXZ
     */
    virtual void stop();
    /**
     * @hash   567959486
     * @vftbl  6
     * @symbol  ?tick\@DrinkMilkGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @hash   -1902980842
     * @vftbl  7
     * @symbol  ?appendDebugInfo\@DrinkMilkGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @hash   51293831
     * @symbol  ??0DrinkMilkGoal\@\@QEAA\@AEAVMob\@\@\@Z
     */
    MCAPI DrinkMilkGoal(class Mob &);

};