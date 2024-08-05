#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/MeleeAttackGoal.h"

class DelayedAttackGoal : public ::MeleeAttackGoal {
public:
    // prevent constructor by default
    DelayedAttackGoal& operator=(DelayedAttackGoal const&);
    DelayedAttackGoal(DelayedAttackGoal const&);
    DelayedAttackGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~DelayedAttackGoal() = default;

    // vIndex: 1
    virtual bool canUse();

    // vIndex: 2
    virtual bool canContinueToUse();

    // vIndex: 4
    virtual void start();

    // vIndex: 5
    virtual void stop();

    // vIndex: 6
    virtual void tick();

    // vIndex: 7
    virtual void appendDebugInfo(std::string& str) const;

    MCAPI explicit DelayedAttackGoal(class Mob& mob);

    MCAPI static bool _isTargetInLineOfSightLegacy(class Mob const&, class Actor const&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _attemptStartAttacking(class Actor* target) const;

    MCAPI void _manageAttackTime();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static class BaseGameVersion const mMinLineOfSightFixVersion;

    // NOLINTEND
};
