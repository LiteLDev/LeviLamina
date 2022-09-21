/**
 * @file  MC/NearestAttackableTargetGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "TargetGoal.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class NearestAttackableTargetGoal.
 *
 */
class NearestAttackableTargetGoal : public TargetGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NEARESTATTACKABLETARGETGOAL
public:
    class NearestAttackableTargetGoal& operator=(class NearestAttackableTargetGoal const &) = delete;
    NearestAttackableTargetGoal(class NearestAttackableTargetGoal const &) = delete;
    NearestAttackableTargetGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~NearestAttackableTargetGoal();
    /**
     * @hash   2083830268
     * @vftbl  1
     * @symbol ?canUse@NearestAttackableTargetGoal@@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @hash   -399699846
     * @vftbl  2
     * @symbol ?canContinueToUse@NearestAttackableTargetGoal@@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @hash   1899317749
     * @vftbl  4
     * @symbol ?start@NearestAttackableTargetGoal@@UEAAXXZ
     */
    virtual void start();
    /**
     * @hash   105278420
     * @vftbl  7
     * @symbol ?appendDebugInfo@NearestAttackableTargetGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
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
     * @hash   -629781167
     * @vftbl  11
     * @symbol ?_findTarget@NearestAttackableTargetGoal@@MEAA?AUActorUniqueID@@PEAPEBUMobDescriptor@@@Z
     */
    virtual struct ActorUniqueID _findTarget(struct MobDescriptor const **);
    /**
     * @hash   -898074439
     * @symbol ??0NearestAttackableTargetGoal@@QEAA@AEAVMob@@@Z
     */
    MCAPI NearestAttackableTargetGoal(class Mob &);

//protected:
    /**
     * @hash   -124282062
     * @symbol ?_canStartSearching@NearestAttackableTargetGoal@@IEAA_NXZ
     */
    MCAPI bool _canStartSearching();
    /**
     * @hash   -1314545990
     * @symbol ?_getNearbyActors@NearestAttackableTargetGoal@@IEAA?AV?$vector@UDistanceSortedActor@@V?$allocator@UDistanceSortedActor@@@std@@@std@@XZ
     */
    MCAPI std::vector<struct DistanceSortedActor> _getNearbyActors();
    /**
     * @hash   -208188825
     * @symbol ?_isTargetVisible@NearestAttackableTargetGoal@@IEBA_NAEBVMob@@MM@Z
     */
    MCAPI bool _isTargetVisible(class Mob const &, float, float) const;

//private:
    /**
     * @hash   -1601561250
     * @symbol ?_selectTarget@NearestAttackableTargetGoal@@AEAA_NXZ
     */
    MCAPI bool _selectTarget();

protected:

private:

};