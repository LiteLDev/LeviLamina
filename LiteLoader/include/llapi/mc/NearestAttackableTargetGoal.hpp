/**
 * @file  NearestAttackableTargetGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
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
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?canUse\@NearestAttackableTargetGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl 2
     * @symbol ?canContinueToUse\@NearestAttackableTargetGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl 4
     * @symbol ?start\@NearestAttackableTargetGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @vftbl 7
     * @symbol ?appendDebugInfo\@NearestAttackableTargetGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @vftbl 11
     * @symbol ?_findTarget\@NearestAttackableTargetGoal\@\@MEAA?AUActorUniqueID\@\@PEAPEBUMobDescriptor\@\@\@Z
     */
    virtual struct ActorUniqueID _findTarget(struct MobDescriptor const **);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_NEARESTATTACKABLETARGETGOAL
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~NearestAttackableTargetGoal();
#endif
    /**
     * @symbol ??0NearestAttackableTargetGoal\@\@QEAA\@AEAVMob\@\@\@Z
     */
    MCAPI NearestAttackableTargetGoal(class Mob &);

//protected:
    /**
     * @symbol ?_canStartSearching\@NearestAttackableTargetGoal\@\@IEAA_NXZ
     */
    MCAPI bool _canStartSearching();
    /**
     * @symbol ?_isTargetInCooldown\@NearestAttackableTargetGoal\@\@IEBA_NAEBUMobDescriptor\@\@\@Z
     */
    MCAPI bool _isTargetInCooldown(struct MobDescriptor const &) const;
    /**
     * @symbol ?_isTargetVisible\@NearestAttackableTargetGoal\@\@IEBA_NAEBVMob\@\@MM\@Z
     */
    MCAPI bool _isTargetVisible(class Mob const &, float, float) const;

//private:
    /**
     * @symbol ?_selectTarget\@NearestAttackableTargetGoal\@\@AEAA_NXZ
     */
    MCAPI bool _selectTarget();

protected:

private:

};
