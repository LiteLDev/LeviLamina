/**
 * @file  ChargeAttackGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @symbol __unk_destructor_0
     */
    virtual ~ChargeAttackGoal();
    /**
     * @hash   -186224255
     * @vftbl  1
     * @symbol ?canUse@ChargeAttackGoal@@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @hash   257666415
     * @vftbl  2
     * @symbol ?canContinueToUse@ChargeAttackGoal@@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @hash   1079921338
     * @vftbl  4
     * @symbol ?start@ChargeAttackGoal@@UEAAXXZ
     */
    virtual void start();
    /**
     * @hash   -776673446
     * @vftbl  5
     * @symbol ?stop@ChargeAttackGoal@@UEAAXXZ
     */
    virtual void stop();
    /**
     * @hash   443998949
     * @vftbl  6
     * @symbol ?tick@ChargeAttackGoal@@UEAAXXZ
     */
    virtual void tick();
    /**
     * @hash   -508485217
     * @vftbl  7
     * @symbol ?appendDebugInfo@ChargeAttackGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @hash   -38719634
     * @symbol ??0ChargeAttackGoal@@QEAA@AEAVMob@@@Z
     */
    MCAPI ChargeAttackGoal(class Mob &);

};