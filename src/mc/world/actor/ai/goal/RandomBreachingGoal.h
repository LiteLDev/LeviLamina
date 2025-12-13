#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/RandomStrollGoal.h"

class RandomBreachingGoal : public ::RandomStrollGoal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> mCooldown;
    ::ll::TypedStorage<4, 4, int> mTimer;
    ::ll::TypedStorage<4, 4, int> mAttempts;
    // NOLINTEND

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

    virtual ~RandomBreachingGoal() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $canUse();

    MCNAPI bool $canContinueToUse();

    MCNAPI void $start();

    MCNAPI void $stop();

    MCNAPI bool $canBeInterrupted();

    MCNAPI void $appendDebugInfo(::std::string& str) const;

    MCNAPI bool $_setWantedPosition();


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
