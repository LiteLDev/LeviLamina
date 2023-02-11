/**
 * @file  ChargeAttackGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ChargeAttackGoal.
 *
 */
class ChargeAttackGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CHARGEATTACKGOAL
public:
    class ChargeAttackGoal& operator=(class ChargeAttackGoal const &) = delete;
    ChargeAttackGoal(class ChargeAttackGoal const &) = delete;
    ChargeAttackGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~ChargeAttackGoal();
    /**
     * @hash   34774993
     * @vftbl  1
     * @symbol  ?canUse\@ChargeAttackGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @hash   478650287
     * @vftbl  2
     * @symbol  ?canContinueToUse\@ChargeAttackGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @symbol  __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @hash   1300935962
     * @vftbl  4
     * @symbol  ?start\@ChargeAttackGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @hash   -555628070
     * @vftbl  5
     * @symbol  ?stop\@ChargeAttackGoal\@\@UEAAXXZ
     */
    virtual void stop();
    /**
     * @hash   665059701
     * @vftbl  6
     * @symbol  ?tick\@ChargeAttackGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @hash   -287024689
     * @vftbl  7
     * @symbol  ?appendDebugInfo\@ChargeAttackGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @hash   182679390
     * @symbol  ??0ChargeAttackGoal\@\@QEAA\@AEAVMob\@\@\@Z
     */
    MCAPI ChargeAttackGoal(class Mob &);

};