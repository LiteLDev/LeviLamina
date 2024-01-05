#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/target/NearestAttackableTargetGoal.h"

class NearestPrioritizedAttackableTargetGoal : public ::NearestAttackableTargetGoal {
public:
    // prevent constructor by default
    NearestPrioritizedAttackableTargetGoal& operator=(NearestPrioritizedAttackableTargetGoal const&);
    NearestPrioritizedAttackableTargetGoal(NearestPrioritizedAttackableTargetGoal const&);
    NearestPrioritizedAttackableTargetGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1NearestPrioritizedAttackableTargetGoal@@UEAA@XZ
    virtual ~NearestPrioritizedAttackableTargetGoal() = default;

    // vIndex: 7, symbol:
    // ?appendDebugInfo@NearestPrioritizedAttackableTargetGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void appendDebugInfo(std::string& str) const;

    // vIndex: 11, symbol:
    // ?_findTarget@NearestPrioritizedAttackableTargetGoal@@EEAA?AUActorUniqueID@@PEAPEBUMobDescriptor@@@Z
    virtual struct ActorUniqueID _findTarget(struct MobDescriptor const** outMobDescriptor);

    // symbol:
    // ??0NearestPrioritizedAttackableTargetGoal@@QEAA@AEAVMob@@AEBV?$vector@UMobDescriptor@@V?$allocator@UMobDescriptor@@@std@@@std@@MH_NH22HM2H2@Z
    MCAPI NearestPrioritizedAttackableTargetGoal(
        class Mob&                               mob,
        std::vector<struct MobDescriptor> const& targetTypes,
        float                                    within,
        int,
        bool  mustSee,
        int   mustSeeForgetTicks,
        bool  mustReach,
        bool  reselectTargets,
        int   scanInterval,
        float targetSearchHeight,
        bool  attackOwner,
        int   persistTargetTicks,
        bool
    );

    // NOLINTEND
};
