/**
 * @file  EatMobGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class EatMobGoal.
 *
 */
class EatMobGoal {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EATMOBGOAL
public:
    class EatMobGoal& operator=(class EatMobGoal const &) = delete;
    EatMobGoal(class EatMobGoal const &) = delete;
    EatMobGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~EatMobGoal();
    /**
     * @hash   -38779723
     * @vftbl  1
     * @symbol  ?canUse\@EatMobGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @hash   434090147
     * @vftbl  2
     * @symbol  ?canContinueToUse\@EatMobGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @symbol  __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @hash   -799398898
     * @vftbl  4
     * @symbol  ?start\@EatMobGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @hash   -485310482
     * @vftbl  5
     * @symbol  ?stop\@EatMobGoal\@\@UEAAXXZ
     */
    virtual void stop();
    /**
     * @hash   -1003194935
     * @vftbl  6
     * @symbol  ?tick\@EatMobGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @hash   21068059
     * @vftbl  7
     * @symbol  ?appendDebugInfo\@EatMobGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @hash   1599016210
     * @symbol  ??0EatMobGoal\@\@QEAA\@AEAVMob\@\@\@Z
     */
    MCAPI EatMobGoal(class Mob &);

};