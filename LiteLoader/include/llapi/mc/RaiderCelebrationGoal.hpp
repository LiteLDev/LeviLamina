/**
 * @file  RaiderCelebrationGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class RaiderCelebrationGoal.
 *
 */
class RaiderCelebrationGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RAIDERCELEBRATIONGOAL
public:
    class RaiderCelebrationGoal& operator=(class RaiderCelebrationGoal const &) = delete;
    RaiderCelebrationGoal(class RaiderCelebrationGoal const &) = delete;
    RaiderCelebrationGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~RaiderCelebrationGoal();
    /**
     * @hash   1143438010
     * @vftbl  1
     * @symbol  ?canUse\@RaiderCelebrationGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @hash   -2060692872
     * @vftbl  2
     * @symbol  ?canContinueToUse\@RaiderCelebrationGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @symbol  __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @hash   -335791101
     * @vftbl  4
     * @symbol  ?start\@RaiderCelebrationGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @hash   1944171603
     * @vftbl  5
     * @symbol  ?stop\@RaiderCelebrationGoal\@\@UEAAXXZ
     */
    virtual void stop();
    /**
     * @hash   1858722318
     * @vftbl  6
     * @symbol  ?tick\@RaiderCelebrationGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @hash   -1895625370
     * @vftbl  7
     * @symbol  ?appendDebugInfo\@RaiderCelebrationGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @hash   -1777119721
     * @symbol  ??0RaiderCelebrationGoal\@\@QEAA\@AEAVMob\@\@\@Z
     */
    MCAPI RaiderCelebrationGoal(class Mob &);

};