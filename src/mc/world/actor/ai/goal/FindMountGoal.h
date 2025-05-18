#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/TempEPtr.h"
#include "mc/world/actor/ai/goal/Goal.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Mob;
class Path;
// clang-format on

class FindMountGoal : public ::Goal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, ::TempEPtr<::Actor>>      mTarget;
    ::ll::TypedStorage<4, 4, float>                     mTargetDist;
    ::ll::TypedStorage<4, 4, int>                       mTimeToRecalcPath;
    ::ll::TypedStorage<4, 4, int>                       mStartCounter;
    ::ll::TypedStorage<4, 4, int>                       mStartDelay;
    ::ll::TypedStorage<1, 1, bool>                      mAvoidWater;
    ::ll::TypedStorage<1, 1, bool>                      mTargetNeeded;
    ::ll::TypedStorage<4, 4, float>                     mMountDistance;
    ::ll::TypedStorage<4, 4, int>                       mFailedAttemptsCounter;
    ::ll::TypedStorage<4, 4, int>                       mMaxFailedAttempts;
    ::ll::TypedStorage<8, 8, ::Mob&>                    mMob;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Path>> mPath;
    // NOLINTEND

public:
    // prevent constructor by default
    FindMountGoal& operator=(FindMountGoal const&);
    FindMountGoal(FindMountGoal const&);
    FindMountGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~FindMountGoal() /*override*/ = default;

    // vIndex: 1
    virtual bool canUse() /*override*/;

    // vIndex: 2
    virtual bool canContinueToUse() /*override*/;

    // vIndex: 4
    virtual void start() /*override*/;

    // vIndex: 5
    virtual void stop() /*override*/;

    // vIndex: 6
    virtual void tick() /*override*/;

    // vIndex: 7
    virtual void appendDebugInfo(::std::string& str) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool isInMountRange();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $canUse();

    MCNAPI bool $canContinueToUse();

    MCNAPI void $start();

    MCNAPI void $stop();

    MCNAPI void $tick();

    MCNAPI void $appendDebugInfo(::std::string& str) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
