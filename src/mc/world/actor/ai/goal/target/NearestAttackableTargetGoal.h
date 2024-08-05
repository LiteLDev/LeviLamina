#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/target/TargetGoal.h"

class NearestAttackableTargetGoal : public ::TargetGoal {
public:
    // prevent constructor by default
    NearestAttackableTargetGoal& operator=(NearestAttackableTargetGoal const&);
    NearestAttackableTargetGoal(NearestAttackableTargetGoal const&);
    NearestAttackableTargetGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~NearestAttackableTargetGoal();

    // vIndex: 1
    virtual bool canUse();

    // vIndex: 2
    virtual bool canContinueToUse();

    // vIndex: 4
    virtual void start();

    // vIndex: 7
    virtual void appendDebugInfo(std::string& str) const;

    // vIndex: 11
    virtual struct ActorUniqueID _findTarget(struct MobDescriptor const** outMobDescriptor);

    MCAPI explicit NearestAttackableTargetGoal(class Mob& mob);

    MCAPI bool isTargetVisible(class Mob const&, float, float) const;

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI bool _canStartSearching();

    MCAPI bool _isTargetInCooldown(struct MobDescriptor const&) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI bool _selectTarget();

    // NOLINTEND
};
