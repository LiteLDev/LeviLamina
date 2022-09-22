/**
 * @file  TargetGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class TargetGoal.
 *
 */
class TargetGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TARGETGOAL
public:
    class TargetGoal& operator=(class TargetGoal const &) = delete;
    TargetGoal(class TargetGoal const &) = delete;
    TargetGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~TargetGoal();
    /**
     * @hash   -332601497
     * @vftbl  1
     * @symbol ?canUse@WitherTargetHighestDamage@@UEAA_NXZ
     */
    virtual bool canUse() = 0;
    /**
     * @hash   494640906
     * @vftbl  2
     * @symbol ?canContinueToUse@TargetGoal@@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @hash   369070594
     * @vftbl  3
     * @symbol ?isTargetGoal@TargetGoal@@UEBA_NXZ
     */
    virtual bool isTargetGoal() const;
    /**
     * @hash   -1184871563
     * @vftbl  4
     * @symbol ?start@TargetGoal@@UEAAXXZ
     */
    virtual void start();
    /**
     * @hash   1143640389
     * @vftbl  5
     * @symbol ?stop@TargetGoal@@UEAAXXZ
     */
    virtual void stop();
    /**
     * @hash   -1390343584
     * @vftbl  6
     * @symbol ?tick@TargetGoal@@UEAAXXZ
     */
    virtual void tick();
    /**
     * @hash   1346564644
     * @vftbl  7
     * @symbol ?appendDebugInfo@TargetGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @vftbl  8
     * @symbol __unk_vfn_8
     */
    virtual void __unk_vfn_8();
    /**
     * @vftbl  9
     * @symbol __unk_vfn_9
     */
    virtual void __unk_vfn_9();
    /**
     * @hash   1848880719
     * @vftbl  10
     * @symbol ?_canAttack@TargetGoal@@MEAA_NPEAVMob@@PEAVActor@@_N2PEAPEBUMobDescriptor@@@Z
     */
    virtual bool _canAttack(class Mob *, class Actor *, bool, bool, struct MobDescriptor const **);
    /**
     * @hash   717728767
     * @symbol ??0TargetGoal@@QEAA@AEAVMob@@_NH1M1H@Z
     */
    MCAPI TargetGoal(class Mob &, bool, int, bool, float, bool, int);
    /**
     * @hash   -2020198150
     * @symbol ??0TargetGoal@@QEAA@AEAVMob@@AEBV?$vector@UMobDescriptor@@V?$allocator@UMobDescriptor@@@std@@@std@@_NH2M2H@Z
     */
    MCAPI TargetGoal(class Mob &, std::vector<struct MobDescriptor> const &, bool, int, bool, float, bool, int);

//protected:
    /**
     * @hash   731917358
     * @symbol ?_canAttack@TargetGoal@@IEAA_NPEAVActor@@_NPEAPEBUMobDescriptor@@@Z
     */
    MCAPI bool _canAttack(class Actor *, bool, struct MobDescriptor const **);
    /**
     * @hash   1346334652
     * @symbol ?_canReach@TargetGoal@@IEAA_NAEAVActor@@@Z
     */
    MCAPI bool _canReach(class Actor &);
    /**
     * @hash   -1213134827
     * @symbol ?_canReachAfterDelay@TargetGoal@@IEAA_NAEAVActor@@@Z
     */
    MCAPI bool _canReachAfterDelay(class Actor &);
    /**
     * @hash   -1925885963
     * @symbol ?_matchesTargetTypes@TargetGoal@@IEAA_NPEAVMob@@PEAVActor@@_NPEAPEBUMobDescriptor@@@Z
     */
    MCAPI bool _matchesTargetTypes(class Mob *, class Actor *, bool, struct MobDescriptor const **);
    /**
     * @hash   891504040
     * @symbol ?_withinRange@TargetGoal@@IEAA_NAEBVActor@@@Z
     */
    MCAPI bool _withinRange(class Actor const &);

protected:

};