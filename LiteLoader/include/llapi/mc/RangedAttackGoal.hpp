/**
 * @file  RangedAttackGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class RangedAttackGoal.
 *
 */
class RangedAttackGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RANGEDATTACKGOAL
public:
    class RangedAttackGoal& operator=(class RangedAttackGoal const &) = delete;
    RangedAttackGoal(class RangedAttackGoal const &) = delete;
    RangedAttackGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~RangedAttackGoal();
    /**
     * @hash   56948494
     * @vftbl  1
     * @symbol ?canUse@RangedAttackGoal@@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @hash   500839164
     * @vftbl  2
     * @symbol ?canContinueToUse@RangedAttackGoal@@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @hash   258768679
     * @vftbl  4
     * @symbol ?start@RangedAttackGoal@@UEAAXXZ
     */
    virtual void start();
    /**
     * @hash   -1598041369
     * @vftbl  5
     * @symbol ?stop@RangedAttackGoal@@UEAAXXZ
     */
    virtual void stop();
    /**
     * @hash   -377261342
     * @vftbl  6
     * @symbol ?tick@RangedAttackGoal@@UEAAXXZ
     */
    virtual void tick();
    /**
     * @hash   53390354
     * @vftbl  7
     * @symbol ?appendDebugInfo@RangedAttackGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @hash   1277645211
     * @symbol ??0RangedAttackGoal@@QEAA@AEAVMob@@@Z
     */
    MCAPI RangedAttackGoal(class Mob &);
    /**
     * @hash   1812969420
     * @symbol ?handleAttackBehavior@RangedAttackGoal@@QEAAXPEAVActor@@AEBVVec3@@M_N@Z
     */
    MCAPI void handleAttackBehavior(class Actor *, class Vec3 const &, float, bool);

};