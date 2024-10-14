#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/world/actor/ai/goal/target/NearestAttackableTargetGoal.h"

class NearestPrioritizedAttackableTargetGoal : public ::NearestAttackableTargetGoal {
public:
    // prevent constructor by default
    NearestPrioritizedAttackableTargetGoal& operator=(NearestPrioritizedAttackableTargetGoal const&);
    NearestPrioritizedAttackableTargetGoal(NearestPrioritizedAttackableTargetGoal const&);
    NearestPrioritizedAttackableTargetGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~NearestPrioritizedAttackableTargetGoal() = default;

    // vIndex: 7
    virtual void appendDebugInfo(std::string& str) const;

    // vIndex: 11
    virtual struct ActorUniqueID _findTarget(struct MobDescriptor const** outMobDescriptor);

    MCAPI NearestPrioritizedAttackableTargetGoal(
        class Mob&                               mob,
        std::vector<struct MobDescriptor> const& targetTypes,
        float                                    within,
        int                                      attackInterval,
        bool                                     mustSee,
        int                                      mustSeeForgetTicks,
        bool                                     mustReach,
        bool                                     reselectTargets,
        int                                      scanInterval,
        float                                    targetSearchHeight,
        bool                                     attackOwner,
        int                                      persistTargetTicks,
        bool                                     setPersistent
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI struct ActorUniqueID _findTarget$(struct MobDescriptor const** outMobDescriptor);

    MCAPI void appendDebugInfo$(std::string& str) const;

    // NOLINTEND
};
