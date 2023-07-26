#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/target/NearestAttackableTargetGoal.h"

class NearestPrioritizedAttackableTargetGoal : public ::NearestAttackableTargetGoal {

public:
    // prevent constructor by default
    NearestPrioritizedAttackableTargetGoal& operator=(NearestPrioritizedAttackableTargetGoal const&) = delete;
    NearestPrioritizedAttackableTargetGoal(NearestPrioritizedAttackableTargetGoal const&)            = delete;
    NearestPrioritizedAttackableTargetGoal()                                                         = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@NearestPrioritizedAttackableTargetGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string&) const; // NOLINT
    /**
     * @vftbl 8
     * @symbol __unk_vfn_8
     */
    virtual void __unk_vfn_8(); // NOLINT
    /**
     * @vftbl 9
     * @symbol __unk_vfn_9
     */
    virtual void __unk_vfn_9(); // NOLINT
    /**
     * @vftbl 11
     * @symbol
     * ?_findTarget\@NearestPrioritizedAttackableTargetGoal\@\@EEAA?AUActorUniqueID\@\@PEAPEBUMobDescriptor\@\@\@Z
     */
    virtual struct ActorUniqueID _findTarget(struct MobDescriptor const**); // NOLINT
    /**
     * @symbol
     * ??0NearestPrioritizedAttackableTargetGoal\@\@QEAA\@AEAVMob\@\@AEBV?$vector\@UMobDescriptor\@\@V?$allocator\@UMobDescriptor\@\@\@std\@\@\@std\@\@MH_NH22HM2H2\@Z
     */
    MCAPI NearestPrioritizedAttackableTargetGoal(
        class Mob&,
        std::vector<struct MobDescriptor> const&,
        float,
        int,
        bool,
        int,
        bool,
        bool,
        int,
        float,
        bool,
        int,
        bool
    ); // NOLINT
};
