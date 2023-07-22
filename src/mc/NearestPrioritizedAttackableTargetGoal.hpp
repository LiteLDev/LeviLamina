/**
 * @file  NearestPrioritizedAttackableTargetGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
#include "NearestAttackableTargetGoal.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class NearestPrioritizedAttackableTargetGoal.
 *
 */
class NearestPrioritizedAttackableTargetGoal : public NearestAttackableTargetGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NEARESTPRIORITIZEDATTACKABLETARGETGOAL
public:
    class NearestPrioritizedAttackableTargetGoal& operator=(class NearestPrioritizedAttackableTargetGoal const &) = delete;
    NearestPrioritizedAttackableTargetGoal(class NearestPrioritizedAttackableTargetGoal const &) = delete;
    NearestPrioritizedAttackableTargetGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~NearestPrioritizedAttackableTargetGoal();
    /**
     * @vftbl  7
     * @symbol  ?appendDebugInfo\@NearestPrioritizedAttackableTargetGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
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
     * @vftbl  11
     * @symbol  ?_findTarget\@NearestPrioritizedAttackableTargetGoal\@\@EEAA?AUActorUniqueID\@\@PEAPEBUMobDescriptor\@\@\@Z
     */
    virtual struct ActorUniqueID _findTarget(struct MobDescriptor const **);
    /**
     * @symbol  ??0NearestPrioritizedAttackableTargetGoal\@\@QEAA\@AEAVMob\@\@AEBV?$vector\@UMobDescriptor\@\@V?$allocator\@UMobDescriptor\@\@\@std\@\@\@std\@\@MH_NH22HM2H2\@Z
     */
    MCAPI NearestPrioritizedAttackableTargetGoal(class Mob &, std::vector<struct MobDescriptor> const &, float, int, bool, int, bool, bool, int, float, bool, int, bool);

};