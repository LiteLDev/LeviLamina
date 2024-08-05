#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class NapGoal : public ::Goal {
public:
    // prevent constructor by default
    NapGoal& operator=(NapGoal const&);
    NapGoal(NapGoal const&);
    NapGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~NapGoal() = default;

    // vIndex: 1
    virtual bool canUse();

    // vIndex: 2
    virtual bool canContinueToUse();

    // vIndex: 4
    virtual void start();

    // vIndex: 5
    virtual void stop();

    // vIndex: 7
    virtual void appendDebugInfo(std::string& str) const;

    MCAPI NapGoal(
        class Mob&                    mob,
        float                         cooldownTimeMin,
        float                         cooldownTimeMax,
        float                         detectMobDistXZ,
        float                         detectMobDistY,
        class ActorFilterGroup const& canNapFilters,
        class ActorFilterGroup const& wakeMobExceptions
    );

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI bool _canSleep(struct Tick const& currentTick) const;

    MCAPI bool _detectsMobs() const;

    MCAPI void _setCooldown();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static float const MOB_DETECT_TIME;

    // NOLINTEND
};
