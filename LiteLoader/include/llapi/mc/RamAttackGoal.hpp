/**
 * @file  MC/RamAttackGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class RamAttackGoal.
 *
 */
class RamAttackGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RAMATTACKGOAL
public:
    class RamAttackGoal& operator=(class RamAttackGoal const &) = delete;
    RamAttackGoal(class RamAttackGoal const &) = delete;
    RamAttackGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~RamAttackGoal();
    /**
     * @hash   168535415
     * @vftbl  1
     * @symbol ?canUse@RamAttackGoal@@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @hash   1035438341
     * @vftbl  2
     * @symbol ?canContinueToUse@RamAttackGoal@@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @hash   -1865193408
     * @vftbl  4
     * @symbol ?start@RamAttackGoal@@UEAAXXZ
     */
    virtual void start();
    /**
     * @hash   2034202928
     * @vftbl  5
     * @symbol ?stop@RamAttackGoal@@UEAAXXZ
     */
    virtual void stop();
    /**
     * @hash   1549819499
     * @vftbl  6
     * @symbol ?tick@RamAttackGoal@@UEAAXXZ
     */
    virtual void tick();
    /**
     * @hash   -2085297847
     * @vftbl  7
     * @symbol ?appendDebugInfo@RamAttackGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @hash   -519769116
     * @symbol ??0RamAttackGoal@@QEAA@AEAVMob@@@Z
     */
    MCAPI RamAttackGoal(class Mob &);

//protected:
    /**
     * @hash   1632677074
     * @symbol ?_initiateRamAttack@RamAttackGoal@@IEAA_NXZ
     */
    MCAPI bool _initiateRamAttack();

//private:
    /**
     * @hash   10558017
     * @symbol ?_hasChargePath@RamAttackGoal@@AEAA_NXZ
     */
    MCAPI bool _hasChargePath();
    /**
     * @hash   -281415858
     * @symbol ?_pathablePos@RamAttackGoal@@AEAA_NAEBVBlockSource@@VBlockPos@@@Z
     */
    MCAPI bool _pathablePos(class BlockSource const &, class BlockPos);
    /**
     * @hash   -1566058770
     * @symbol ?_resetCooldown@RamAttackGoal@@AEAAXXZ
     */
    MCAPI void _resetCooldown();
    /**
     * @hash   -148648269
     * @symbol ?_tryKnockbackTarget@RamAttackGoal@@AEAAXXZ
     */
    MCAPI void _tryKnockbackTarget();

protected:

private:

};