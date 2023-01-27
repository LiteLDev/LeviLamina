/**
 * @file  SwimWithEntityGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class SwimWithEntityGoal.
 *
 */
class SwimWithEntityGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SWIMWITHENTITYGOAL
public:
    class SwimWithEntityGoal& operator=(class SwimWithEntityGoal const &) = delete;
    SwimWithEntityGoal(class SwimWithEntityGoal const &) = delete;
    SwimWithEntityGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~SwimWithEntityGoal();
    /**
     * @hash   -2110478580
     * @vftbl  1
     * @symbol  ?canUse\@SwimWithEntityGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @hash   166743562
     * @vftbl  2
     * @symbol  ?canContinueToUse\@SwimWithEntityGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @hash   1128524500
     * @vftbl  3
     * @symbol  ?canBeInterrupted\@SwimWithEntityGoal\@\@UEAA_NXZ
     */
    virtual bool canBeInterrupted();
    /**
     * @hash   1203667829
     * @vftbl  4
     * @symbol  ?start\@SwimWithEntityGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @hash   1828669605
     * @vftbl  5
     * @symbol  ?stop\@SwimWithEntityGoal\@\@UEAAXXZ
     */
    virtual void stop();
    /**
     * @hash   282206816
     * @vftbl  6
     * @symbol  ?tick\@SwimWithEntityGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @hash   1130329748
     * @vftbl  7
     * @symbol  ?appendDebugInfo\@SwimWithEntityGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @hash   -2076576695
     * @symbol  ??0SwimWithEntityGoal\@\@QEAA\@AEAVMob\@\@\@Z
     */
    MCAPI SwimWithEntityGoal(class Mob &);

//private:
    /**
     * @hash   -2032986704
     * @symbol  ?_setWantedMob\@SwimWithEntityGoal\@\@AEAA_NXZ
     */
    MCAPI bool _setWantedMob();

private:

};