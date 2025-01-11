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
    ::ll::UntypedStorage<4, 4> mUnkb38fb2;
    ::ll::UntypedStorage<4, 4> mUnk1a915b;
    ::ll::UntypedStorage<4, 4> mUnka7e8ea;
    // NOLINTEND

public:
    // prevent constructor by default
    RandomBreachingGoal& operator=(RandomBreachingGoal const&);
    RandomBreachingGoal(RandomBreachingGoal const&);
    RandomBreachingGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual bool canUse() /*override*/;

    // vIndex: 2
    virtual bool canContinueToUse() /*override*/;

    // vIndex: 4
    virtual void start() /*override*/;

    // vIndex: 5
    virtual void stop() /*override*/;

    // vIndex: 3
    virtual bool canBeInterrupted() /*override*/;

    // vIndex: 7
    virtual void appendDebugInfo(::std::string& str) const /*override*/;

    // vIndex: 10
    virtual bool _setWantedPosition() /*override*/;

    // vIndex: 0
    virtual ~RandomBreachingGoal() /*override*/ = default;
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
    // destructor thunk
    // NOLINTBEGIN

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
    MCAPI static void** $vftable();
    // NOLINTEND
};
