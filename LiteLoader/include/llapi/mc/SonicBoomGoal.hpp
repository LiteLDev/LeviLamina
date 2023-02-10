/**
 * @file  SonicBoomGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class SonicBoomGoal.
 *
 */
class SonicBoomGoal {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SONICBOOMGOAL
public:
    class SonicBoomGoal& operator=(class SonicBoomGoal const &) = delete;
    SonicBoomGoal(class SonicBoomGoal const &) = delete;
    SonicBoomGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~SonicBoomGoal();
    /**
     * @hash   1323262006
     * @vftbl  1
     * @symbol  ?canUse\@SonicBoomGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @hash   -2104848492
     * @vftbl  2
     * @symbol  ?canContinueToUse\@SonicBoomGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @symbol  __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @hash   1354154431
     * @vftbl  4
     * @symbol  ?start\@SonicBoomGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @hash   959075503
     * @vftbl  5
     * @symbol  ?stop\@SonicBoomGoal\@\@UEAAXXZ
     */
    virtual void stop();
    /**
     * @hash   474845834
     * @vftbl  6
     * @symbol  ?tick\@SonicBoomGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @hash   907970106
     * @vftbl  7
     * @symbol  ?appendDebugInfo\@SonicBoomGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @hash   679433683
     * @symbol  ??0SonicBoomGoal\@\@QEAA\@AEAVMob\@\@\@Z
     */
    MCAPI SonicBoomGoal(class Mob &);

};