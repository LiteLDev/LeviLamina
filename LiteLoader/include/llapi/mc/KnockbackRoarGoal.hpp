/**
 * @file  MC/KnockbackRoarGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class KnockbackRoarGoal.
 *
 */
class KnockbackRoarGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_KNOCKBACKROARGOAL
public:
    class KnockbackRoarGoal& operator=(class KnockbackRoarGoal const &) = delete;
    KnockbackRoarGoal(class KnockbackRoarGoal const &) = delete;
    KnockbackRoarGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~KnockbackRoarGoal();
    /**
     * @hash   1518679028
     * @vftbl  1
     * @symbol ?canUse@KnockbackRoarGoal@@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @hash   1348872130
     * @vftbl  2
     * @symbol ?canContinueToUse@KnockbackRoarGoal@@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @hash   -61092499
     * @vftbl  4
     * @symbol ?start@KnockbackRoarGoal@@UEAAXXZ
     */
    virtual void start();
    /**
     * @hash   -1149540931
     * @vftbl  5
     * @symbol ?stop@KnockbackRoarGoal@@UEAAXXZ
     */
    virtual void stop();
    /**
     * @hash   -34824344
     * @vftbl  6
     * @symbol ?tick@KnockbackRoarGoal@@UEAAXXZ
     */
    virtual void tick();
    /**
     * @hash   412362316
     * @vftbl  7
     * @symbol ?appendDebugInfo@KnockbackRoarGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @hash   -1527210943
     * @symbol ??0KnockbackRoarGoal@@QEAA@AEAVMob@@@Z
     */
    MCAPI KnockbackRoarGoal(class Mob &);

};