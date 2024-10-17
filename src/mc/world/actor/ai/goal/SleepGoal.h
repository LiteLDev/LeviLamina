#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/world/actor/ai/goal/MoveToPOIGoal.h"
#include "mc/world/actor/ai/village/POIType.h"

class SleepGoal : public ::MoveToPOIGoal {
public:
    // prevent constructor by default
    SleepGoal& operator=(SleepGoal const&);
    SleepGoal(SleepGoal const&);
    SleepGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SleepGoal() = default;

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

    // vIndex: 16
    virtual uint64 _getRepathTime() const;

    MCAPI SleepGoal(
        class Mob& mob,
        float      walkSpeed,
        float      sleepColliderHeight,
        float      sleepColliderWidth,
        bool       canSleepWhileRiding,
        float      sleepYOffset,
        int        cooldown,
        float      cooldownTimeout
    );

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _lockPosToBedPos();

    MCAPI void _wakeUp();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(
        class Mob& mob,
        float      walkSpeed,
        float      sleepColliderHeight,
        float      sleepColliderWidth,
        bool       canSleepWhileRiding,
        float      sleepYOffset,
        int        cooldown,
        float      cooldownTimeout
    );

    MCAPI uint64 _getRepathTime$() const;

    MCAPI void appendDebugInfo$(std::string& str) const;

    MCAPI bool canContinueToUse$();

    MCAPI bool canUse$();

    MCAPI void start$();

    MCAPI void stop$();

    MCAPI void tick$();

    // NOLINTEND
};
