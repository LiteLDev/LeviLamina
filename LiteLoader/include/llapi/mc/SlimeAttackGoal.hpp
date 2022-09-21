/**
 * @file  MC/SlimeAttackGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class SlimeAttackGoal.
 *
 */
class SlimeAttackGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SLIMEATTACKGOAL
public:
    class SlimeAttackGoal& operator=(class SlimeAttackGoal const &) = delete;
    SlimeAttackGoal(class SlimeAttackGoal const &) = delete;
    SlimeAttackGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~SlimeAttackGoal();
    /**
     * @hash   -307861139
     * @vftbl  1
     * @symbol ?canUse@SlimeAttackGoal@@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @hash   432969995
     * @vftbl  2
     * @symbol ?canContinueToUse@SlimeAttackGoal@@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @hash   2059475910
     * @vftbl  4
     * @symbol ?start@SlimeAttackGoal@@UEAAXXZ
     */
    virtual void start();
    /**
     * @vftbl  5
     * @symbol __unk_vfn_5
     */
    virtual void __unk_vfn_5();
    /**
     * @hash   -1507608463
     * @vftbl  6
     * @symbol ?tick@SlimeAttackGoal@@UEAAXXZ
     */
    virtual void tick();
    /**
     * @hash   -873115197
     * @vftbl  7
     * @symbol ?appendDebugInfo@SlimeAttackGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @hash   5979466
     * @symbol ??0SlimeAttackGoal@@QEAA@AEAVMob@@@Z
     */
    MCAPI SlimeAttackGoal(class Mob &);

};