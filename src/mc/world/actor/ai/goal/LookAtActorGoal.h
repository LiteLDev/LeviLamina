#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class LookAtActorGoal : public ::Goal {
public:
    // prevent constructor by default
    LookAtActorGoal& operator=(LookAtActorGoal const&);
    LookAtActorGoal(LookAtActorGoal const&);
    LookAtActorGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LookAtActorGoal() = default;

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

    MCAPI LookAtActorGoal(
        class Mob& mob,
        float      lookDistance,
        float      probability,
        int        minLookTime,
        int        maxLookTime,
        int        angleOfViewX,
        int        angleOfViewY
    );

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI bool _withinFieldOfView(class Actor& entity);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(
        class Mob& mob,
        float      lookDistance,
        float      probability,
        int        minLookTime,
        int        maxLookTime,
        int        angleOfViewX,
        int        angleOfViewY
    );

    MCAPI void appendDebugInfo$(std::string& str) const;

    MCAPI bool canContinueToUse$();

    MCAPI bool canUse$();

    MCAPI void start$();

    MCAPI void stop$();

    MCAPI void tick$();

    // NOLINTEND
};
