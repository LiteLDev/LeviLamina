/**
 * @file  RoarGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class RoarGoal.
 *
 */
class RoarGoal {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ROARGOAL
public:
    class RoarGoal& operator=(class RoarGoal const &) = delete;
    RoarGoal(class RoarGoal const &) = delete;
    RoarGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~RoarGoal();
    /**
     * @hash   1560395551
     * @vftbl  1
     * @symbol  ?canUse\@RoarGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @hash   -352865491
     * @vftbl  2
     * @symbol  ?canContinueToUse\@RoarGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @symbol  __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @hash   -403225352
     * @vftbl  4
     * @symbol  ?start\@RoarGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @hash   1730026664
     * @vftbl  5
     * @symbol  ?stop\@RoarGoal\@\@UEAAXXZ
     */
    virtual void stop();
    /**
     * @hash   -175956829
     * @vftbl  6
     * @symbol  ?tick\@RoarGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @hash   -482363519
     * @vftbl  7
     * @symbol  ?appendDebugInfo\@RoarGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @hash   -641797252
     * @symbol  ??0RoarGoal\@\@QEAA\@AEAVMob\@\@\@Z
     */
    MCAPI RoarGoal(class Mob &);

};