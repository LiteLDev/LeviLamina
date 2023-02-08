/**
 * @file  RunAroundLikeCrazyGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class RunAroundLikeCrazyGoal.
 *
 */
class RunAroundLikeCrazyGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RUNAROUNDLIKECRAZYGOAL
public:
    class RunAroundLikeCrazyGoal& operator=(class RunAroundLikeCrazyGoal const &) = delete;
    RunAroundLikeCrazyGoal(class RunAroundLikeCrazyGoal const &) = delete;
    RunAroundLikeCrazyGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~RunAroundLikeCrazyGoal();
    /**
     * @hash   -948385781
     * @vftbl  1
     * @symbol  ?canUse\@RunAroundLikeCrazyGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @hash   1754826793
     * @vftbl  2
     * @symbol  ?canContinueToUse\@RunAroundLikeCrazyGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @symbol  __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @hash   -1667824588
     * @vftbl  4
     * @symbol  ?start\@RunAroundLikeCrazyGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @vftbl  5
     * @symbol  __unk_vfn_5
     */
    virtual void __unk_vfn_5();
    /**
     * @vftbl  6
     * @symbol  __unk_vfn_6
     */
    virtual void __unk_vfn_6();
    /**
     * @hash   627081093
     * @vftbl  7
     * @symbol  ?appendDebugInfo\@RunAroundLikeCrazyGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @hash   2053409641
     * @symbol  ??0RunAroundLikeCrazyGoal\@\@QEAA\@AEAVMob\@\@M\@Z
     */
    MCAPI RunAroundLikeCrazyGoal(class Mob &, float);

};