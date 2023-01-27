/**
 * @file  NearestAttackableTargetGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "../../TargetGoal.hpp"

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
     * @symbol  __unk_destructor_0
     */
    virtual ~NearestAttackableTargetGoal();
    /**
     * @hash   1033403452
     * @vftbl  1
     * @symbol  ?canUse\@NearestAttackableTargetGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @hash   -1450157414
     * @vftbl  2
     * @symbol  ?canContinueToUse\@NearestAttackableTargetGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @hash   848906309
     * @vftbl  4
     * @symbol  ?start\@NearestAttackableTargetGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @hash   -944564108
     * @vftbl  7
     * @symbol  ?appendDebugInfo\@NearestAttackableTargetGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @vftbl  8
     * @symbol  __unk_vfn_8
     */
    virtual void __unk_vfn_8();
    /**
     * @vftbl  9
     * @symbol  __unk_vfn_9
     */
    virtual void __unk_vfn_9();
    /**
     * @hash   -1679685199
     * @vftbl  11
     * @symbol  ?_findTarget\@NearestAttackableTargetGoal\@\@MEAA?AUActorUniqueID\@\@PEAPEBUMobDescriptor\@\@\@Z
     */
    virtual struct ActorUniqueID _findTarget(struct MobDescriptor const **);
    /**
     * @hash   -1947993847
     * @symbol  ??0NearestAttackableTargetGoal\@\@QEAA\@AEAVMob\@\@\@Z
     */
    MCAPI NearestAttackableTargetGoal(class Mob &);

//protected:
    /**
     * @hash   -1174201470
     * @symbol  ?_canStartSearching\@NearestAttackableTargetGoal\@\@IEAA_NXZ
     */
    MCAPI bool _canStartSearching();
    /**
     * @hash   1930517274
     * @symbol  ?_getNearbyActors\@NearestAttackableTargetGoal\@\@IEAA?AV?$vector\@UDistanceSortedActor\@\@V?$allocator\@UDistanceSortedActor\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<struct DistanceSortedActor> _getNearbyActors();
    /**
     * @hash   -1258092857
     * @symbol  ?_isTargetVisible\@NearestAttackableTargetGoal\@\@IEBA_NAEBVMob\@\@MM\@Z
     */
    MCAPI bool _isTargetVisible(class Mob const &, float, float) const;

//private:
    /**
     * @hash   1643563518
     * @symbol  ?_selectTarget\@NearestAttackableTargetGoal\@\@AEAA_NXZ
     */
    MCAPI bool _selectTarget();

protected:

private:

};