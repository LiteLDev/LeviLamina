/**
 * @file  MC/MeleeAttackGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class MeleeAttackGoal.
 *
 */
class MeleeAttackGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MELEEATTACKGOAL
public:
    class MeleeAttackGoal& operator=(class MeleeAttackGoal const &) = delete;
    MeleeAttackGoal(class MeleeAttackGoal const &) = delete;
    MeleeAttackGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~MeleeAttackGoal();
    /**
     * @hash   1056676449
     * @vftbl  1
     * @symbol ?canUse@MeleeAttackGoal@@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @hash   1797261567
     * @vftbl  2
     * @symbol ?canContinueToUse@MeleeAttackGoal@@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @hash   294122698
     * @vftbl  4
     * @symbol ?start@MeleeAttackGoal@@UEAAXXZ
     */
    virtual void start();
    /**
     * @hash   1183473930
     * @vftbl  5
     * @symbol ?stop@MeleeAttackGoal@@UEAAXXZ
     */
    virtual void stop();
    /**
     * @hash   1023174197
     * @vftbl  6
     * @symbol ?tick@MeleeAttackGoal@@UEAAXXZ
     */
    virtual void tick();
    /**
     * @hash   1515272063
     * @vftbl  7
     * @symbol ?appendDebugInfo@MeleeAttackGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
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
     * @hash   983390811
     * @vftbl  10
     * @symbol ?_attemptMoveToTarget@MeleeAttackGoal@@MEAAXAEAVActor@@@Z
     */
    virtual void _attemptMoveToTarget(class Actor &);
    /**
     * @hash   -1872820481
     * @vftbl  11
     * @symbol ?_attemptAttackTarget@MeleeAttackGoal@@MEAAXAEAVActor@@MMMM@Z
     */
    virtual void _attemptAttackTarget(class Actor &, float, float, float, float);
    /**
     * @hash   1596367262
     * @symbol ??0MeleeAttackGoal@@QEAA@AEAVMob@@@Z
     */
    MCAPI MeleeAttackGoal(class Mob &);

//protected:
    /**
     * @hash   -1171558461
     * @symbol ?_attemptMoveToTargetPosition@MeleeAttackGoal@@IEAAXAEAVActor@@M@Z
     */
    MCAPI void _attemptMoveToTargetPosition(class Actor &, float);
    /**
     * @hash   1410739351
     * @symbol ?_getAttackReachSqr@MeleeAttackGoal@@IEBAMAEBVActor@@@Z
     */
    MCAPI float _getAttackReachSqr(class Actor const &) const;
    /**
     * @hash   1262381367
     * @symbol ?_inSunlight@MeleeAttackGoal@@IEBA_NAEBVActor@@@Z
     */
    MCAPI bool _inSunlight(class Actor const &) const;

protected:
    /**
     * @hash   762391833
     * @symbol ?min3DAttackVersion@MeleeAttackGoal@@1VBaseGameVersion@@B
     */
    MCAPI static class BaseGameVersion const min3DAttackVersion;

};