#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/RandomStrollGoal.h"

// auto generated forward declare list
// clang-format off
class Mob;
// clang-format on

class RandomBreachingGoal : public ::RandomStrollGoal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> mCooldown;
    ::ll::TypedStorage<4, 4, int> mTimer;
    ::ll::TypedStorage<4, 4, int> mAttempts;
    // NOLINTEND

public:
    // prevent constructor by default
    RandomBreachingGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool canUse() /*override*/;

    virtual bool canContinueToUse() /*override*/;

    virtual void start() /*override*/;

    virtual void stop() /*override*/;

    virtual bool canBeInterrupted() /*override*/;

    virtual void appendDebugInfo(::std::string& str) const /*override*/;

    virtual bool _setWantedPosition() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI RandomBreachingGoal(::Mob& mob, float speed, int xzDist, int yDist, int interval, float cooldown);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Mob& mob, float speed, int xzDist, int yDist, int interval, float cooldown);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $canUse();

    MCAPI bool $canContinueToUse();

    MCAPI void $start();

    MCAPI void $stop();

    MCFOLD bool $canBeInterrupted();

    MCAPI void $appendDebugInfo(::std::string& str) const;

    MCAPI bool $_setWantedPosition();


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
