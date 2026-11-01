#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/TempEPtr.h"
#include "mc/world/actor/ai/goal/BaseGoal.h"

// auto generated forward declare list
// clang-format off
class Mob;
struct GoalId;
// clang-format on

class FollowParentGoal : public ::BaseGoal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Mob&>             mMob;
    ::ll::TypedStorage<8, 40, ::TempEPtr<::Mob>> mParent;
    ::ll::TypedStorage<4, 4, float>              mSpeed;
    ::ll::TypedStorage<4, 4, int>                mTimeToRecalcPath;
    ::ll::TypedStorage<1, 1, bool const>         mStopNavigationOnStop;
    // NOLINTEND

public:
    // prevent constructor by default
    FollowParentGoal& operator=(FollowParentGoal const&);
    FollowParentGoal(FollowParentGoal const&);
    FollowParentGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool canUse() /*override*/;

    virtual bool canContinueToUse() /*override*/;

    virtual void start() /*override*/;

    virtual void stop() /*override*/;

    virtual void tick() /*override*/;

    virtual void appendDebugInfo(::std::string& str) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI FollowParentGoal(::Mob& mob, ::std::string name, ::GoalId const& goalId);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Mob& mob, ::std::string name, ::GoalId const& goalId);
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
