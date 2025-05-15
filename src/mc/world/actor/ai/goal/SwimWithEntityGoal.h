#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/TempEPtr.h"
#include "mc/world/actor/ai/goal/Goal.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Mob;
struct MobDescriptor;
// clang-format on

class SwimWithEntityGoal : public ::Goal {
public:
    // SwimWithEntityGoal inner types define
    enum class EntityGoals : int {
        CatchUpToEntity      = 0,
        MatchEntityDirection = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Mob&>                            mMob;
    ::ll::TypedStorage<8, 40, ::TempEPtr<::Actor>>              mFollowing;
    ::ll::TypedStorage<4, 4, int>                               mIntervalRefreshTicks;
    ::ll::TypedStorage<4, 4, int>                               mIntervalTicks;
    ::ll::TypedStorage<4, 4, float>                             mChanceToStop;
    ::ll::TypedStorage<4, 4, float>                             mSuccessRate;
    ::ll::TypedStorage<4, 4, float>                             mCatchUpThreshold;
    ::ll::TypedStorage<4, 4, float>                             mMatchDirectionThreshold;
    ::ll::TypedStorage<4, 4, float>                             mCatchUpMultiplier;
    ::ll::TypedStorage<4, 4, float>                             mSpeedMultiplier;
    ::ll::TypedStorage<4, 4, float>                             mSearchRange;
    ::ll::TypedStorage<4, 4, float>                             mStopDistance;
    ::ll::TypedStorage<4, 4, ::SwimWithEntityGoal::EntityGoals> mCurrentGoal;
    ::ll::TypedStorage<8, 24, ::std::vector<::MobDescriptor>>   mTargetTypes;
    // NOLINTEND

public:
    // prevent constructor by default
    SwimWithEntityGoal& operator=(SwimWithEntityGoal const&);
    SwimWithEntityGoal(SwimWithEntityGoal const&);
    SwimWithEntityGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual bool canUse() /*override*/;

    // vIndex: 2
    virtual bool canContinueToUse() /*override*/;

    // vIndex: 3
    virtual bool canBeInterrupted() /*override*/;

    // vIndex: 4
    virtual void start() /*override*/;

    // vIndex: 5
    virtual void stop() /*override*/;

    // vIndex: 6
    virtual void tick() /*override*/;

    // vIndex: 7
    virtual void appendDebugInfo(::std::string& str) const /*override*/;

    // vIndex: 0
    virtual ~SwimWithEntityGoal() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool _setWantedMob();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $canUse();

    MCNAPI bool $canContinueToUse();

    MCNAPI bool $canBeInterrupted();

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
