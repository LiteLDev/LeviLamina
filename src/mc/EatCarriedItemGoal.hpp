/**
 * @file  EatCarriedItemGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class EatCarriedItemGoal.
 *
 */
class EatCarriedItemGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EATCARRIEDITEMGOAL
public:
    class EatCarriedItemGoal& operator=(class EatCarriedItemGoal const &) = delete;
    EatCarriedItemGoal(class EatCarriedItemGoal const &) = delete;
    EatCarriedItemGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~EatCarriedItemGoal();
    /**
     * @vftbl  1
     * @symbol  ?canUse\@EatCarriedItemGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl  2
     * @symbol  ?canContinueToUse\@EatCarriedItemGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @symbol  __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @symbol  ?start\@EatCarriedItemGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @vftbl  5
     * @symbol  ?stop\@EatCarriedItemGoal\@\@UEAAXXZ
     */
    virtual void stop();
    /**
     * @vftbl  6
     * @symbol  ?tick\@EatCarriedItemGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @vftbl  7
     * @symbol  ?appendDebugInfo\@EatCarriedItemGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @symbol  ??0EatCarriedItemGoal\@\@QEAA\@AEAVMob\@\@H\@Z
     */
    MCAPI EatCarriedItemGoal(class Mob &, int);

//private:

private:
    /**
     * @symbol  ?CHEW_CHANCE\@EatCarriedItemGoal\@\@0HB
     */
    MCAPI static int const CHEW_CHANCE;
    /**
     * @symbol  ?EATING_TIME\@EatCarriedItemGoal\@\@0HB
     */
    MCAPI static int const EATING_TIME;

};