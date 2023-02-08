/**
 * @file  EatBlockGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class EatBlockGoal.
 *
 */
class EatBlockGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EATBLOCKGOAL
public:
    class EatBlockGoal& operator=(class EatBlockGoal const &) = delete;
    EatBlockGoal(class EatBlockGoal const &) = delete;
    EatBlockGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~EatBlockGoal();
    /**
     * @hash   -131730504
     * @vftbl  1
     * @symbol  ?canUse\@EatBlockGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @hash   -69945338
     * @vftbl  2
     * @symbol  ?canContinueToUse\@EatBlockGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @symbol  __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @hash   1475852177
     * @vftbl  4
     * @symbol  ?start\@EatBlockGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @hash   1581173713
     * @vftbl  5
     * @symbol  ?stop\@EatBlockGoal\@\@UEAAXXZ
     */
    virtual void stop();
    /**
     * @hash   -2098890916
     * @vftbl  6
     * @symbol  ?tick\@EatBlockGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @hash   390709224
     * @vftbl  7
     * @symbol  ?appendDebugInfo\@EatBlockGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @hash   -1433926299
     * @symbol  ??0EatBlockGoal\@\@QEAA\@AEAVMob\@\@\@Z
     */
    MCAPI EatBlockGoal(class Mob &);
    /**
     * @hash   1737200905
     * @symbol  ?getEatSuccessChance\@EatBlockGoal\@\@QEBAMAEAVActor\@\@\@Z
     */
    MCAPI float getEatSuccessChance(class Actor &) const;

};